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
        VALUES (
            'jetson0001', 
            1, 
            5, 
            2.425230, 
            -23.105093, 
            'Warning, critical battery level (5%)'
        );
    )";

    char* returnedErrorMessage = nullptr;
    if (sqlite3_exec(   databasePointer, 
                        insertDeviceSQL.c_str(), 
                        nullptr, 
                        nullptr, 
                        &returnedErrorMessage) != SQLITE_OK) {

        std::cerr   << "Problem inserting into Device table: " 
                    << returnedErrorMessage 
                    << std::endl;

        sqlite3_free(returnedErrorMessage);
        exit(EXIT_FAILURE);
    }
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

    std::string allowedOperations[] = {"view", "add", "delete"};
    for (auto allowedOperation : allowedOperations) {
        
        std::string insertAllowedOperationSQL = 
        "INSERT INTO AllowedOperations (allowedOperation)"
        "VALUES ('" + allowedOperation + "');";

        char* returnedErrorMessage = nullptr;
        if (sqlite3_exec(   databasePointer, 
                            insertAllowedOperationSQL.c_str(), 
                            nullptr, 
                            nullptr, 
                            &returnedErrorMessage) != SQLITE_OK) {

            std::cerr   << "Problem inserting into AllowedOperations table: " 
                        << returnedErrorMessage
                        << std::endl;

            sqlite3_free(returnedErrorMessage);
            exit(EXIT_FAILURE);
        }
    }
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
