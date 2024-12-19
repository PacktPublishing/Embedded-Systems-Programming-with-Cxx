#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

int main(int argc, char* argv[]) {

    nlohmann::json jsonData;
    jsonData["deviceId"] = "jetson0001";
    jsonData["isActive"] = true;
    jsonData["batteryLevel"] = 5;
    nlohmann::json currentLocation;
    currentLocation["latitude"] = 2.425230;
    currentLocation["longitude"] = -23.105093;
    jsonData["currentLocation"] = currentLocation;
    jsonData["lastErrorMessage"] = "Warning, critical battery level (5%)";
    jsonData["allowedOperations"] = {"view", "add", "delete"};

    std::string filePath("../example_output.json");
    std::ofstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cerr << "Problem opening " << filePath << std::endl;
        return 1;
    }
    fileStream << jsonData.dump(4);
    fileStream.close();

    std::cout << "The written JSON content: " << jsonData.dump(4) << std::endl;

    return 0;
}
