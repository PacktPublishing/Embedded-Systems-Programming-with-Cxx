#!/bin/bash

mkdir -p poky/meta-example_layer/recipes-support/example_app
cp example_app.bb poky/meta-example_layer/recipes-support/example_app/
cat poky/meta-example_layer/recipes-support/example_app/example_app.bb
