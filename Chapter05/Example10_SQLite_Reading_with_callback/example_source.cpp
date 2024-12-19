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

    auto deviceCallback = [](   void* notUsed,
                                int argc,
                                char** argv,
                                char** azColName) -> int {

        for (int i = 0; i < argc; i++) {
            std::cout   << "Column ["
                        << azColName[i] << "]: "
                        << (argv[i] ? argv[i] : "NULL")
                        << std::endl;
        }
        return 0;
    };

    char* returnedErrorMessage = nullptr;
    if (sqlite3_exec(   databasePointer,
                        queryDeviceTableSQL,
                        deviceCallback,
                        nullptr,
                        &returnedErrorMessage) != SQLITE_OK) {

        std::cerr   << "Problem reading from Device table: "
                    << returnedErrorMessage
                    << std::endl;

        sqlite3_free(returnedErrorMessage);
        exit(EXIT_FAILURE);
    }
}

/**
 * Function to print the content of AllowedOperations table.
 */
void readAllowedOperationsTable() {

    const char* queryAllowedOperationsTableSQL = R"(
        SELECT  allowedOperation FROM AllowedOperations;
    )";
    
    auto allowedOperationsCallback = [](  void* notUsed,
                                            int argc,
                                            char** argv,
                                            char** azColName) -> int {
        std::cout << "Row ";
        for (int i = 0; i < argc; i++) {
            std::cout   << "["
                        << azColName[i]
                        << "]: "
                        << (argv[i] ? argv[i] : "NULL")
                        << " ";
        }
        std::cout << std::endl;
        return 0;
    };

    char* returnedErrorMessage = nullptr;
    if (sqlite3_exec(   databasePointer,
                        queryAllowedOperationsTableSQL,
                        allowedOperationsCallback,
                        nullptr,
                        &returnedErrorMessage) != SQLITE_OK) {

        std::cerr   << "Problem reading from AllowedOperations table: "
                    << returnedErrorMessage
                    << std::endl;

        sqlite3_free(returnedErrorMessage);
        exit(EXIT_FAILURE);
    }
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
