#include <iostream>
#include <fstream>
#include "example_model.pb.h"

int main(int argc, char* argv[]) {

    Device device;
    device.set_deviceid("jetson0001");
    device.set_isactive(true);
    device.set_batterylevel(5);
    CurrentLocation* currentLocation = device.mutable_currentlocation();
    currentLocation->set_latitude(2.42523);
    currentLocation->set_longitude(-23.105093);
    device.set_lasterrormessage("Warning, critical battery level (5%)");
    device.add_allowedoperations("view");
    device.add_allowedoperations("add");
    device.add_allowedoperations("delete");

    std::string filePath("../example_output.bin");
    std::ofstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cerr << "Problem opening " << filePath << std::endl;
        return 1;
    }
    if (!device.SerializeToOstream(&fileStream)) {
        std::cerr << "Problem writing the messae in "  << filePath << std::endl;
        return 1;
    }
    fileStream.close();

    std::cout << "Written Protobuf message:" << std::endl << device.DebugString();

    return 0;
}
