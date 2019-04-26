## Overview

This small tool allows to read the openMVG matches files in order to extract the list of the image pairs that are considered as calibrated by openMVG matching process.

## Copyright and License

**omvg-match** - Nils Hamel <br >
Copyright (c) 2019 DHLAB, EPFL

This program is licensed under the terms of the GNU GPLv3.

## Dependencies

The _omvg-match_ comes with the following dependencies :

* [openMVG](https://github.com/openMVG/openMVG)

## Compilation

To build to tools, adapt the path in the Makefile to point at openMVG sources and build libraries. Then type

    make all

## Usage

To use the compiled source, simply type :

    ./omvg-match /match/file/path