SUMMARY = "Example 04 App from Chapter 01"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=470fc034f3c2517b00eb9e802cee7ca1"

SRC_URI = "file://example_source.cpp"

do_compile() {
    g++ example_source.cpp -o example_binary
}

do_install() {
    install example_binary ${D}${bindir}
} 
