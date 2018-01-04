//
// Created by jahne on 2017/12/04.
//

#ifndef AVM_INPUT_H
#define AVM_INPUT_H

#include <iostream>
#include <vector>

class Input {
///  TODO: ARGV? yes - check filename - no - take input
/// en sommer 'n foggen Try Catch eksperiment ook

public:
    Input();

    ~Input();

    std::vector<std::string> read(); // use cin for input, return vector of strings

    std::vector<std::string> read(std::string filename); // use ifstream for input, return vector of strings

private:
    std::vector<std::string>    commands; // save input, read function will return this vector

};


#endif //AVM_INPUT_H


////populate vectors:
//
//std::vector<char> v = {};
//v.push_back(readline) in a loop;
