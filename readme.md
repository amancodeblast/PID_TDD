PID based on Test Driven Development

[![Build Status](https://app.travis-ci.com/amancodeblast/cpp-boilerplate.svg?branch=master)](https://app.travis-ci.com/amancodeblast/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/amancodeblast/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/amancodeblast/cpp-boilerplate?branch=master)
---

## Overview
Week 5 ENPM808X Test Driven Development

Part 1 
**Navigator**: Sharmitha Ganesan
**Driver**: Aman Kumar Sharma

Part 2
**Programmer**: Tanuj Thakkar (tanuj@umd.edu)


## Standard install via command-line
```
git clone --recursive https://github.com/amancodeblast/cpp-boilerplate.git
cd cpp-boilerplate
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/myApp
```

## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

