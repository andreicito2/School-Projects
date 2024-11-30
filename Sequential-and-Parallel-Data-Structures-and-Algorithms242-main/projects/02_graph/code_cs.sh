#!/bin/bash

# Add library files to project folder to help with IDE line highlighting.
ln -s  ../../include/bridges/include/Array.h Array.h
ln -s  ../../include/bridges/include/Bridges.h Bridges.h
ln -s  ../../include/bridges/include/DataSource.h DataSource.h
ln -s  ../../include/bridges/include/Element.h Element.h
ln -s  ../../include/bridges/include/SLelement.h SLelement.h
ln -s  ../../include/bridges/include/GraphAdjList.h GraphAdjList.h
mkdir -p data_src
ln -s  ../../include/bridges/include/data_src/ActorMovieIMDB.h data_src/ActorMovieIMDB.h
