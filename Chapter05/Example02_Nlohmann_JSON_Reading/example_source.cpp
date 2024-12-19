#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

int main(int argc, char* argv[]) {

    std::ifstream fileStream("../example_input.json");
    nlohmann::json jsonData = nlohmann::json::parse(fileStream);
    fileStream.close();

    auto deviceId = jsonData["deviceId"];
    auto isActive = jsonData["isActive"];
    auto batteryLevel = jsonData["batteryLevel"];
    auto currentLocation = jsonData["currentLocation"];
    auto currentLocationLatitude = currentLocation["latitude"];
    auto currentLocationLongitude = currentLocation["longitude"];
    auto lastErrorMessage = jsonData["lastErrorMessage"];
    auto allowedOperations = jsonData["allowedOperations"];

    std::cout << "Content of [deviceId]: " << deviceId << std::endl;
    std::cout << "Content of [isActive]: " << (isActive?"true":"false") << std::endl;
    std::cout << "Content of [batteryLevel]: " << batteryLevel << std::endl;
    std::cout << "Content of [currentLocation[latitude]]: " << currentLocationLatitude << std::endl;
    std::cout << "Content of [currentLocation[longitude]]: " << currentLocationLongitude << std::endl;
    std::cout << "Content of [lastErrorMessage]: " << lastErrorMessage << std::endl;
    std::cout << "Content of [allowedOperations]:";
    for (const auto& allowedOperation : allowedOperations) {
        std::cout << " " << allowedOperation;
    }
    std::cout << std::endl;

    return 0;
}
