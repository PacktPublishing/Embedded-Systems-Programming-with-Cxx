#!/bin/bash

mkdir -p poky/meta-example_layer/recipes-support/example_app/files
cp example_source.cpp poky/meta-example_layer/recipes-support/example_app/files/
ls -la poky/meta-example_layer/recipes-support/example_app/*
