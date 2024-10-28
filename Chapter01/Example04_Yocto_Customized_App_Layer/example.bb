SUMMARY = "Example 04 App from Chapter 01"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://example_source.cpp"

do_compile() {
    ${CXX} example_source.cpp -o example_binary
}

do_install() {
    install example_binary ${D}${bindir}
} 
