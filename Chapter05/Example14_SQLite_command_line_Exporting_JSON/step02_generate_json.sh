#!/bin/bash

sqlite3 example_input.db ".mode json" "SELECT * FROM Device;"
