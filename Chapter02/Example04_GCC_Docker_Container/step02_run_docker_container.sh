#!/bin/bash

docker run -it  -v $(realpath .):/usr/src/app/ ubuntu_jammy

# Note: The "-v" option will map the current directory to container folder /usr/src/app/
