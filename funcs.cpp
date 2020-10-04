#include <iostream>
#include "funcs.h"

void test_ascii(std::string input){

 char output;

    for(int i = 0; i < input.size(); i++){

        output = input[i]; // setting the character to the letter at the position if i.
        std::cout << output << ": " << (int)output << "\n";   // this is outputting the Letter followed by the ascii of the letter, hence the (int)
    }
}