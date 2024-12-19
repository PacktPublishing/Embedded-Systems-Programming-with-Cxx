#include <iostream>
#include <fstream>
#include "example_model.pb.h"

int main(int argc, char* argv[]) {

    std::string filePath("example_input.bin");
    std::ifstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cerr << "Problem opening " << filePath << std::endl;
        return 1;
    }

    Device device;
    if (!device.ParseFromIstream(&fileStream)) {
        std::cerr << "Problem reading the messae from " << filePath << std::endl;
        return 1;
    }
    fileStream.close();

    std::cout << "Content of [deviceId]: " << device.deviceid() << std::endl;
    std::cout << "Content of [isActive]: " << (device.isactive()?"true":"false") << std::endl;
    std::cout << "Content of [batteryLevel]: " << device.batterylevel() << std::endl;
    std::cout << "Content of [currentLocation[latitude]]: " << device.currentlocation().latitude() << std::endl;
    std::cout << "Content of [currentLocation[longitude]]: " << device.currentlocation().longitude() << std::endl;
    std::cout << "Content of [lastErrorMessage]: " << device.lasterrormessage() << std::endl;
    std::cout << "Content of [allowedOperations]:";
    for (const auto& allowedOperation : device.allowedoperations()) {
        std::cout << " " << allowedOperation;
    }
    std::cout << std::endl;

    return 0;
}
