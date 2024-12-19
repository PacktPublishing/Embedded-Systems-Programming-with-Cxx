#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install sqlite3
    sudo apt-get -y install python3
else
    echo "Please manually install sqlite3."
fi
