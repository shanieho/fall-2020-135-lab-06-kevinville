#include <iostream>
#include "funcs.h"
#include "caesar.h"
int main()
{
  std::string input;  // we need a string to take the persons input, then a character in the program to convert it to ascii.

  // Testing Lab 6A
  input = "Doggo";
  std::cout <<"Runs Lab6A with word Doggo.\n";
  test_ascii(input);
  std::cout << "\n" << "Runs with words Good Boy!\n";
  input = "Good Boy!";
  test_ascii(input);
  std::cout << "\n-----------------\n";
  return 0;
}
