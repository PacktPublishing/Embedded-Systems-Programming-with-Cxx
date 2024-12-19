#include <iostream>
#include <sqlite3.h>

/**
 * Database path.
 */
std::string databaseFileName = "../example_output.db";

/**
 * Database pointer.
 */
sqlite3* databasePointer = nullptr;

/**
 * Function to open the database (if exists),
 *  or create the database (if doesn't exist). 
 * 
 * On failure, the function aborts the execution.
 */
void createDatabase() {
    if (sqlite3_open(   databaseFileName.c_str(), 
                        &databasePointer) != SQLITE_OK) {
        std::cerr   << "Problem opening database [" 
                    << databaseFileName << "]: " 
                    << sqlite3_errmsg(databasePointer) 
                    << std::endl;
        exit(EXIT_FAILURE);
    }
}

/**
 * Function to close the database.
 */
void closeDatabase() {
    sqlite3_close(databasePointer);
}

/**
 * Function to create the Device table.
 *
 * On failure, the function aborts the execution.
 */
void createDeviceTable() {
    const char* createDeviceTableSQL = R"(
        CREATE TABLE IF NOT EXISTS Device (
            deviceId TEXT,
            isActive INTEGER,
            batteryLevel INTEGER,
            currentLocationLatitude REAL,
            currentLocationLongitude REAL,
            lastErrorMessage TEXT
        );
    )";
    char* returnedErrorMessage = nullptr;
    if (sqlite3_exec(   databasePointer, 
                        createDeviceTableSQL, 
                        nullptr, 
                        nullptr, 
                        &returnedErrorMessage) != SQLITE_OK) {

        std::cerr   << "Problem creating Device table: " 
                    << returnedErrorMessage 
                    << std::endl;
        sqlite3_free(returnedErrorMessage);
        exit(EXIT_FAILURE);
    }
}

/**
 * Function to insert data into the Device table.
 *
 * On failure, the function aborts the execution.
 */
void fillDeviceTable() {

    std::string insertDeviceSQL = R"(
        INSERT INTO Device (    
                        deviceId, 
                        isActive,
                        batteryLevel,
                        currentLocationLatitude,
                        currentLocationLongitude,
                        lastErrorMessage
        )
        VALUES (?, ?, ?, ?, ?, ?);
    )";

    sqlite3_stmt* statement;
    if (sqlite3_prepare_v2( databasePointer, 
                            insertDeviceSQL.c_str(), 
                            -1, 
                            &statement, 
                            nullptr) != SQLITE_OK) {

        std::cerr << "Problem preparing statement for Device table: " 
                  << sqlite3_errmsg(databasePointer)
                  << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string deviceId = "jetson0001";
    bool isActive = true;
    int batteryLevel = 5;
    double currentLocationLatitude = 2.425230;
    double currentLocationLongitude = -23.105093;
    std::string lastErrorMessage = "Warning, critical battery level (5%)";

    sqlite3_bind_text(statement, 1, deviceId.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(statement, 2, isActive);
    sqlite3_bind_int(statement, 3, batteryLevel);
    sqlite3_bind_double(statement, 4, currentLocationLatitude);
    sqlite3_bind_double(statement, 5, currentLocationLongitude);
    sqlite3_bind_text(statement, 6, lastErrorMessage.c_str(), -1, SQLITE_STATIC);

    if (sqlite3_step(statement) != SQLITE_DONE) {

        std::cerr << "Problem executing statement for Device table: " 
                  << sqlite3_errmsg(databasePointer)
                  << std::endl;
        sqlite3_finalize(statement);
        exit(EXIT_FAILURE);
    }
    sqlite3_finalize(statement);
}

/**
 * Function to create the Device table.
 *
 * On failure, the function aborts the execution.
 */ 
void createAllowedOperationsTable() {

    const char* createAllowedOperationsTableSQL = R"(
        CREATE TABLE IF NOT EXISTS AllowedOperations (
            allowedOperation TEXT
        );
    )";

    char* returnedErrorMessage = nullptr;
    if (sqlite3_exec(   databasePointer, 
                        createAllowedOperationsTableSQL, 
                        nullptr, 
                        nullptr, 
                        &returnedErrorMessage) != SQLITE_OK) {

        std::cerr   << "Problem creating AllowedOperations tables: " 
                    << returnedErrorMessage 
                    << std::endl;
        sqlite3_free(returnedErrorMessage);
        exit(EXIT_FAILURE);
    }
}

/**
 * Function to insert data into the AllowedOperations table.
 *
 * On failure, the function aborts the execution.
 */
void fillAllowedOperationsTable() {

    std::string insertAllowedOperationsSQL = R"(
        INSERT INTO AllowedOperations (allowedOperation)
        VALUES (?);
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
        exit(EXIT_FAILURE);
    }

    std::string allowedOperations[] = {"view", "add", "delete"};
    for (std::string allowedOperation : allowedOperations) {
        
        sqlite3_bind_text(statement, 1, allowedOperation.c_str(), -1, SQLITE_STATIC);

        if (sqlite3_step(statement) != SQLITE_DONE) {
            std::cerr << "Problem executing statement for AllowedOperations table: " 
                    << sqlite3_errmsg(databasePointer) 
                    << std::endl;
            sqlite3_finalize(statement);
            exit(EXIT_FAILURE);
        }
        sqlite3_reset(statement);
    }
    sqlite3_finalize(statement);
}

/**
 * Main function.
 */
int main(int argc, char* argv[]) {

    createDatabase();
    createDeviceTable();
    fillDeviceTable();
    createAllowedOperationsTable();
    fillAllowedOperationsTable();
    closeDatabase();

    std::cout << "Database has been successfully created and populated." << std::endl;

    return EXIT_SUCCESS;
}
