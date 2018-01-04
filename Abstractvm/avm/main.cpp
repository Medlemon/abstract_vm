#include <iostream>
#include "Input.h"
int main(int argc, char **argv) {

///  TODO: Implement the "Input" class
///       Receive input via file or input until EOP / ERROR

    //FILE      *stdin;

    std::cout << "Receive input via file or console input until EOP / ERROR" << std::endl;
    if (argc == 2) {
        std::cout << "Argument is : " << argv[1] << std::endl;
        // use Input.read(argv[1]) to check validity of file and save contents to Vector/Struct
    }
    else if (argc > 2) {
        std::cout << "ERROR: Too many arguments. Enter filename or press return key for manual input" << std::endl;
    }
    else {
        std::cout << "Manual input will take place" << std::endl;
        // use Input.read() to manually save input line by line + check syntax maybe?
    }
    return 0;
}