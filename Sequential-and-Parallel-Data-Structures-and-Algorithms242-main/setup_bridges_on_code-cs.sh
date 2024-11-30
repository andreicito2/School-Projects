#!/bin/bash
#
# The steps to install Bridges on Code.CS
#
# Official instructions: http://bridgesuncc.github.io/bridges_setup.html
# These steps can be modified to install the libraries on other systems.
#

# Save all files in an include directory.
# Note: Uncomment the rm command if you want to delete the previous setup.
#rm -r include
mkdir -p include
cd include

# First download and extract the Bridges library
# - Get the download link from the bridges site under downloads menu.
#   http://bridgesuncc.github.io/
#
# Download BRIDGES
rm -fr bridges
if [[ ! -f "bridges-cxx-3.4.3-x86_64-linux-gnu.tgz" ]] ;
then
  wget http://bridgesuncc.github.io/sw/bridges-cxx-3.4.3-x86_64-linux-gnu.tgz
fi
# Extract BRIDGES
tar -xzf bridges-cxx-3.4.3-x86_64-linux-gnu.tgz
mv bridges-cxx-3.4.3-x86_64-linux-gnu bridges

# Second download and install the CURL library
#  - The CURL site has the download file for different system with instructions.
#    https://curl.haxx.se/
# 
# Download CURL
rm -fr curl
if [[ ! -f "curl-7.82.0.tar.gz" ]] ;
then
  wget https://curl.se/download/curl-7.82.0.tar.gz
fi
# Extract CURL
if [[ ! -d "curl-7.82.0" ]] ;
then
  tar -xzf curl-7.82.0.tar.gz
fi
# Install CURL
curl_install="$(pwd)/curl"
cd curl-7.82.0
./configure --with-wolfssl --prefix=${curl_install}
make
make install
