#!/bin/bash

# This step is actually not in use
#   because instead of applying the original LICENSE
#   we are using the MIT license provided by poky common-licenses
#   through the variable ${COMMON_LICENSE_DIR}

# In case of errors, check if the md5 specified in the example.bb
#   is the same as the MIT file placed in common-licenses directory

# If you want to use the original license
#   you must copy it to the recipe directory:
#   poky/meta-customized/recipes-support/example/files/
#   and change the LIC_FILES_CHKSUM variable in your example.bb to:
#   LIC_FILES_CHKSUM = "file://LICENSE;md5=470fc034f3c2517b00eb9e802cee7ca1"
#   remembering to confirm the original LICENSE file md5,
#   and ensure that the LICENSE file is in the same folder as example.bb

cat poky/meta/conf/licenses.conf
md5sum poky/meta/files/common-licenses/MIT
