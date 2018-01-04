//
// Created by jahne on 2017/12/04.
//

#include "Input.h"

// Constructors

Input::Input() {
    std::cout << "Input::Input Constructor called" << std::endl;
};


// Destructor

Input::~Input() {
    std::cout << "Input::Input Destructor called" << std::endl;
}

// Member Functions

// read from cin and save to file for later use as a test case, etc.
// return lines as a vector of strings
std::vector<std::string> Input::read() {
    // ifstream <cin>
};

// read file
// return lines as a vector of strings
std::vector<std::string> Input::read(std::string filename) {
    // ifstream <filename>
};