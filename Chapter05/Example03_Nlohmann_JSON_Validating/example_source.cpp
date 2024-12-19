#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

int main(int argc, char* argv[]) {

    std::string filePath("../example_input.json");
    std::ifstream fileStream(filePath);

    if (!fileStream.is_open()) {
        std::cerr << "Problem opening " << filePath << std::endl;
        return 1;
    }

    nlohmann::json jsonData;
    try {
        fileStream >> jsonData;
    } 
    catch (std::exception& ex) {
        std::cerr << "Problem parsing JSON file: " << ex.what() << std::endl;
        return 1;
    }
    std::cout << "Parsed JSON file: " << jsonData.dump(4) << std::endl;

    // deviceId

    if (jsonData["deviceId"].is_null()) {
        std::cerr << "Content of [deviceId] is on null" << std::endl;
    }
    else if (!jsonData["deviceId"].is_string()) {
        std::cerr << "Content of [deviceId] is not a string" << std::endl;
    }
    else {
        std::string deviceId = jsonData["deviceId"];
        std::cout << "Content of [deviceId]: " << deviceId << std::endl;
    }

    // isActive

    if (jsonData["isActive"].is_null()) {
        std::cerr << "Content of [isActive] is on null" << std::endl;
    }
    else if (!jsonData["isActive"].is_boolean()) {
        std::cerr << "Content of [isActive] is not a boolean" << std::endl;
    }
    else {
        bool isActive = jsonData["isActive"];
        std::cout << "Content of [isActive]: " << (isActive?"true":"false") << std::endl;
    }

    // batteryLevel

    if (jsonData["batteryLevel"].is_null()) {
        std::cerr << "Content of [batteryLevel] is on null" << std::endl;
    }
    else if (!jsonData["batteryLevel"].is_number_integer()) {
        std::cerr << "Content of [batteryLevel] is not an integer number" << std::endl;
    }
    else {
        int batteryLevel = jsonData["batteryLevel"];
        std::cout << "Content of [batteryLevel]: " << batteryLevel << std::endl;
    }

    // currentLocation

    if (jsonData["currentLocation"].is_null()) {
        std::cerr << "Content of [currentLocation] is on null" << std::endl;
    }
    else if (!jsonData["currentLocation"].is_object()) {
        std::cerr << "Content of [currentLocation] is not an object" << std::endl;
    }
    else {
        auto currentLocation = jsonData["currentLocation"];

        // currentLocation[latitude]

        if (currentLocation["latitude"].is_null()) {
            std::cerr << "Content of [currentLocation[latitude]] is on null" << std::endl;
        }
        else if (!currentLocation["latitude"].is_number()) {
            std::cerr << "Content of [currentLocation[latitude]] is not a number" << std::endl;
        }
        else {
            double currentLocationLatitude = currentLocation["latitude"];
            std::cout << "Content of [currentLocation[latitude]]: " << currentLocationLatitude << std::endl;
        }

        //currentLocation[longitude]

        if (currentLocation["longitude"].is_null()) {
            std::cerr << "Content of [currentLocation[longitude]] is on null" << std::endl;
        }
        else if (!currentLocation["longitude"].is_number()) {
            std::cerr << "Content of [currentLocation[longitude]] is not a number" << std::endl;
        }
        else {
            double currentLocationLongitude = currentLocation["longitude"];
            std::cout << "Content of [currentLocation[longitude]]: " << currentLocationLongitude << std::endl;
        }
    }

    // lastErrorMessage

    if (jsonData["lastErrorMessage"].is_null()) {
        std::cerr << "Content of [lastErrorMessage] is on null" << std::endl;
    }
    else if (!jsonData["lastErrorMessage"].is_string()) {
        std::cerr << "Content of [lastErrorMessage] is not a string" << std::endl;
    }
    else {
        std::string lastErrorMessage = jsonData["lastErrorMessage"];
        std::cout << "Content of [lastErrorMessage]: " << lastErrorMessage << std::endl;
    }

    // allowedOperations

    if (jsonData["allowedOperations"].is_null()) {
        std::cerr << "Content of [allowedOperations] is on null" << std::endl;
    }
    else if (!jsonData["allowedOperations"].is_array()) {
        std::cerr << "Content of [allowedOperations] is not an array" << std::endl;
    }
    else {
        auto allowedOperations = jsonData["allowedOperations"];
        std::cout << "Content of [allowedOperations]:";
        for (const auto& allowedOperation : allowedOperations) {
            std::cout << " " << allowedOperation;
        }
        std::cout << std::endl;
    }

    return 0;
}
