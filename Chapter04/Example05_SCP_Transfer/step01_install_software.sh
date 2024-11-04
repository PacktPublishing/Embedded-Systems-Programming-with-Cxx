#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install ssh
    sudo apt-get -y install openssh-client
    sudo apt-get -y install openssh-server
else
    echo "Please manually install SSH."
fi
