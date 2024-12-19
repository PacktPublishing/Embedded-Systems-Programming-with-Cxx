#include <iostream>
#include <fstream>
#include <google/protobuf/util/json_util.h>
#include "example_model.pb.h"

int main(int argc, char* argv[]) {

    std::string filePath("../example_input.bin");
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

    std::string jsonString;
    google::protobuf::util::JsonPrintOptions jsonOptions;
    jsonOptions.add_whitespace = true;
    google::protobuf::util::MessageToJsonString(device, &jsonString, jsonOptions);

    std::cout   << "Protobuf message converted to JSON:" 
                << std::endl
                << jsonString;
    return 0;
}
