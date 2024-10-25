SUMMARY = "Example 04 App from Chapter 01"
LICENSE = "MIT"
SRC_URI = "file://example_source.cpp"
do_compile() {
    g++ example_source.cpp -o example_binary
}
do_install() {
    install example_binary ${D}${bindir}
} 
