#include <iostream>
#include <sqlite3.h>

/**
 * Database path.
 */
std::string databaseFileName = "../example_input.db";

/**
 * Database pointer.
 */
sqlite3* databasePointer = nullptr;

/**
 * Function to open the database (if exists).
 * 
 * On failure, the function aborts the execution.
 */
void openDatabase() {

    if (sqlite3_open_v2(    databaseFileName.c_str(), 
                            &databasePointer,
                            SQLITE_OPEN_READONLY,
                            nullptr) != SQLITE_OK) {

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
 * Function to print the content of Device table.
 */
void readDeviceTable() {

    const char* queryDeviceTableSQL = R"(
        SELECT  deviceId, 
                isActive, 
                batteryLevel, 
                currentLocationLatitude, 
                currentLocationLongitude, 
                lastErrorMessage
        FROM Device;
    )";
    sqlite3_stmt* statement;
    if (sqlite3_prepare_v2( databasePointer,
                            queryDeviceTableSQL,
                            -1,
                            &statement,
                            nullptr) != SQLITE_OK) {

        std::cerr   << "Problem preparing Statement to read Device table: "
                    << sqlite3_errmsg(databasePointer)
                    << std::endl;
        exit(EXIT_FAILURE);
    }
    while (sqlite3_step(statement) == SQLITE_ROW) {
        
        auto deviceId = reinterpret_cast<const char*>(sqlite3_column_text(statement, 0));
        auto isActive = sqlite3_column_int(statement, 1);
        auto batteryLevel = sqlite3_column_int(statement, 2);
        auto currentLocationLatitude = sqlite3_column_double(statement, 3);
        auto currentLocationLongitude = sqlite3_column_double(statement, 4);
        auto lastErrorMessage = reinterpret_cast<const char*>(sqlite3_column_text(statement, 5));

        std::cout << "Column [deviceId]: " << (deviceId ? deviceId : "NULL") << std::endl;
        std::cout << "Column [isActive]: " << (isActive ? "true" : "false") << std::endl;
        std::cout << "Column [batteryLevel]: " << batteryLevel << std::endl;
        std::cout << "Column [currentLocationLatitude]: " << currentLocationLatitude << std::endl;
        std::cout << "Column [currentLocationLongitude]: " << currentLocationLongitude << std::endl;
        std::cout << "Column [lastErrorMessage]: " << (lastErrorMessage ? lastErrorMessage : "NULL") << std::endl;
    }
    sqlite3_finalize(statement);
}

/**
 * Function to print the content of AllowedOperations table.
 */
void readAllowedOperationsTable() {

    const char* queryAllowedOperationsTableSQL = R"(
        SELECT  allowedOperation
        FROM AllowedOperations;
    )";
    sqlite3_stmt* statement;
    if (sqlite3_prepare_v2( databasePointer,
                            queryAllowedOperationsTableSQL,
                            -1,
                            &statement,
                            nullptr) != SQLITE_OK) {

        std::cerr   << "Problem preparing Statement to read AllowedOperations table: "
                    << sqlite3_errmsg(databasePointer)
                    << std::endl;
        exit(EXIT_FAILURE);
    }
    while (sqlite3_step(statement) == SQLITE_ROW) {
        auto allowedOperation = reinterpret_cast<const char*>(sqlite3_column_text(statement, 0));
        std::cout << "Row [allowedOperation]: " << (allowedOperation ? allowedOperation : "NULL") << std::endl;
    }
    sqlite3_finalize(statement);
}

/**
 * Main function.
 */
int main(int argc, char* argv[]) {

    openDatabase();
    readDeviceTable();
    readAllowedOperationsTable();
    closeDatabase();

    return EXIT_SUCCESS;
}
