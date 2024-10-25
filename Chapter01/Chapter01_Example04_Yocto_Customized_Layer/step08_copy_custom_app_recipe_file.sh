#!/bin/bash

mkdir -p poky/meta-example-layer/recipes-support/example-app
cp example_app.bb poky/meta-example-layer/recipes-support/example-app/
cat poky/meta-example-layer/recipes-support/example-app/example_app.bb
