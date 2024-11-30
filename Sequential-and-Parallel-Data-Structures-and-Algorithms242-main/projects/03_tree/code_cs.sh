#!/bin/bash

# Add library files to project folder to help with IDE line highlighting.
ln -s  ../../include/bridges/include/BSTElement.h BSTElement.h
ln -s  ../../include/bridges/include/Bridges.h Bridges.h
ln -s  ../../include/bridges/include/DataSource.h DataSource.h
mkdir -p data_src
ln -s  ../../include/bridges/include/data_src/EarthquakeUSGS.h data_src/EarthquakeUSGS.h
