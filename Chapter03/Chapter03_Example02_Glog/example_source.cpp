#include <glog/logging.h>
int main(int argc, char* argv[]) {

    // Initializing glog (Google Logging library)
    google::InitGoogleLogging(argv[0]);
    
    // Forwarding glog output to the console (stderr)
    FLAGS_logtostderr = 1;

    // Printing messages
    LOG(INFO) << "Example 02 from Chapter 03:";
    LOG(INFO) << "Running binary compiled from C++ code.";
    LOG(INFO) << "Project files were generated by CMake.";
    LOG(INFO) << "Project was built by Make.";
    LOG(INFO) << "Project is linked with Google Logging library (glog) manually installed.";
    
    // Shutting down the Google Logging library
    google::ShutdownGoogleLogging();

    return 0;
}
