#include <iostream>
#include <fstream>
#include <vector>
#include <sqlite3.h>
#include <nlohmann/json.hpp>
#include "example_model.pb.h"

/**
 * Local property [allowedOperationsProperty].
 */
std::vector<std::string> allowedOperationsProperty = {"view"};

/**
 * Prints the content of [allowedOperationsProperty].
 */
void printLocalProperty() {
    std::cout << "Current values of [allowedOperationsProperty]:";
    for (const auto& allowedOperation : allowedOperationsProperty) {
        std::cout << " " << allowedOperation;
    }
    std::cout << std::endl;
}

/**
 * Updates the local database with the current values of [allowedOperationsProperty].
 */
void updateLocalDatabase() {
    std::cout << "Updating SQLite database entries..." << std::endl;
    std::string databaseFileName = "../example_data.db";
    sqlite3* databasePointer = nullptr;
    if (sqlite3_open(   databaseFileName.c_str(), 
                        &databasePointer) != SQLITE_OK) {
        std::cerr   << "Problem opening database [" 
                    << databaseFileName << "]: " 
                    << sqlite3_errmsg(databasePointer) 
                    << std::endl;
        return;
    }
    std::string createAllowedOperationsTableSQL = R"(
        CREATE TABLE IF NOT EXISTS AllowedOperations (
            allowedOperation TEXT
        );
    )";
    char* returnedErrorMessageCreate = nullptr;
    if (sqlite3_exec(   databasePointer, 
                        createAllowedOperationsTableSQL.c_str(), 
                        nullptr, 
                        nullptr, 
                        &returnedErrorMessageCreate) != SQLITE_OK) {

        std::cerr   << "Problem creating AllowedOperations tables: " 
                    << returnedErrorMessageCreate 
                    << std::endl;
        sqlite3_free(returnedErrorMessageCreate);
        return;
    }
    std::string deleteAllowedOperationsTableSQL = "DELETE FROM AllowedOperations;";
    char* returnedErrorMessageDelete = nullptr;
    if (sqlite3_exec(   databasePointer, 
                        deleteAllowedOperationsTableSQL.c_str(), 
                        nullptr, 
                        nullptr, 
                        &returnedErrorMessageDelete) != SQLITE_OK) {
        std::cerr << "Problem clearing Device table: " 
                  << returnedErrorMessageDelete 
                  << std::endl;
        sqlite3_free(returnedErrorMessageDelete);
    }
    std::string insertAllowedOperationsSQL = R"(
        INSERT INTO AllowedOperations (allowedOperation) VALUES (?);
    )";
    sqlite3_stmt* statement;
    if (sqlite3_prepare_v2( databasePointer, 
                            insertAllowedOperationsSQL.c_str(), 
                            -1, 
                            &statement, 
                            nullptr) != SQLITE_OK) {
        std::cerr << "Problem preparing statement for AllowedOperations table: " 
                  << sqlite3_errmsg(databasePointer)
                  << std::endl;
        return;
    }
    for (std::string allowedOperation : allowedOperationsProperty) {
        sqlite3_bind_text(statement, 1, allowedOperation.c_str(), -1, SQLITE_STATIC);
        if (sqlite3_step(statement) != SQLITE_DONE) {
            std::cerr << "Problem executing statement for AllowedOperations table: " 
                    << sqlite3_errmsg(databasePointer) 
                    << std::endl;
            sqlite3_finalize(statement);
            return;
        }
        sqlite3_reset(statement);
    }
    sqlite3_finalize(statement);
    sqlite3_close(databasePointer);
}

/**
 * Tries to open the SQLite database and search for [allowedOperations] entry.
 * If present, updates the global variable [allowedOperationsProperty].
 */
void readLocalDatabase() {
    std::cout << "Searching for SQLite database entries..." << std::endl;
    std::string databaseFileName = "../example_data.db";
    sqlite3* databasePointer = nullptr;
    if (sqlite3_open_v2(    databaseFileName.c_str(), 
                            &databasePointer,
                            SQLITE_OPEN_READONLY,
                            nullptr) != SQLITE_OK) {
        std::cerr   << "Problem opening database ["
                    << databaseFileName << "]: "
                    << sqlite3_errmsg(databasePointer)
                    << std::endl;
        return;
    }
    const char* queryAllowedOperationsTableSQL = R"(SELECT allowedOperation FROM AllowedOperations;)";
    sqlite3_stmt* statement;
    if (sqlite3_prepare_v2( databasePointer,
                            queryAllowedOperationsTableSQL,
                            -1,
                            &statement,
                            nullptr) != SQLITE_OK) {
        std::cerr   << "Problem preparing Statement to read AllowedOperations table: "
                    << sqlite3_errmsg(databasePointer)
                    << std::endl;
        return;
    }
    allowedOperationsProperty.clear();
    while (sqlite3_step(statement) == SQLITE_ROW) {
        auto allowedOperation = reinterpret_cast<const char*>(sqlite3_column_text(statement, 0));
        if (allowedOperation != nullptr) {
            allowedOperationsProperty.push_back(allowedOperation);
        }
    }
    sqlite3_finalize(statement);
    sqlite3_close(databasePointer);
    printLocalProperty();
}

/**
 * Tries to open the JSON file and search for [allowedOperations] field.
 * If present, updates the global variable [allowedOperationsProperty].
 */
void searchForJsonInput() {
    std::cout << "Searching for JSON input..." << std::endl;
    std::string filePath("../example_input.json");
    std::ifstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cout << "Couln't open JSON file " << filePath << std::endl;
        return;
    }
    nlohmann::json jsonData;
    try {
        fileStream >> jsonData;
    } 
    catch (std::exception& ex) {
        std::cerr << "Problem parsing JSON file: " << ex.what() << std::endl;
        return;
    }
    if (jsonData["allowedOperations"].is_null()) {
        std::cerr << "Content of [allowedOperations] is on null" << std::endl;
        return;
    }
    if (!jsonData["allowedOperations"].is_array()) {
        std::cerr << "Content of [allowedOperations] is not an array" << std::endl;
        return;
    }
    allowedOperationsProperty.clear();
    auto allowedOperations = jsonData["allowedOperations"];
    for (const auto& allowedOperation : allowedOperations) {
        allowedOperationsProperty.push_back(allowedOperation);
    }
    printLocalProperty();
    updateLocalDatabase();
}

/**
 * Tries to open the Protobuf message and search for [allowedOperations] field.
 * If present, updates the global variable [allowedOperationsProperty].
 */
void searchForProtobufInput() {
    std::cout << "Searching for Protobuf input..." << std::endl;
    std::string filePath("../example_input.bin");
    std::ifstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cerr << "Problem opening " << filePath << std::endl;
        return;
    }
    Device device;
    if (!device.ParseFromIstream(&fileStream)) {
        std::cerr << "Problem reading the message from " << filePath << std::endl;
        return;
    }
    fileStream.close();
    allowedOperationsProperty.clear();
    for (const auto& allowedOperation : device.allowedoperations()) {
        allowedOperationsProperty.push_back(allowedOperation);
    }
    printLocalProperty();
    updateLocalDatabase();
}

/**
 * Main function.
 */
int main(int argc, char* argv[]) {
    printLocalProperty();
    readLocalDatabase();
    searchForJsonInput();
    searchForProtobufInput();
    return 0;
}
