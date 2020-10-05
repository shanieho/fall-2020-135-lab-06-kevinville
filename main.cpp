#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "viginere.cpp"
int main()
{
  std::string input;  // we need a string to take the persons input, then a character in the program to convert it to ascii.

  // Testing Lab 6A
  input = "Doggo";
  std::cout <<"Runs Lab6A with word Doggo.\n";
  std::string plaintext = encryptVigenere("Hello World", "jojo");
  std::cout << plaintext << "\nRuns with words Good Boy!\n";
  input = "Good Boy!";
  test_ascii(input);
  std::cout << "\n-----------------\n";
  return 0;
}

