#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"
int main()
{
  std::string input;  // we need a string to take the persons input, then a character in the program to convert it to ascii.

  // Testing Lab 6A
  input = "Good Boy!";
  std::cout <<"Runs Lab6A with words Good Boy.\n";
  test_ascii(input);
  std::cout << "\nRuns with word doggo!\n";
  input = "doggo";
  test_ascii(input);
  std::cout << "-----------------------\n";

  // Testing Lab 6B
  std::cout <<"Runs Lab6B/D with word doggo and 10 shift.\n";
  std::cout << "Original: " << input << "\n";
  std::string caesarencrypt = encryptCaesar(input, 10);
  std::cout << "Caesar Encrypted: " << caesarencrypt;
  std::cout << "\nCaesar Decrypted: " << decryptCaesar(caesarencrypt, 10);
  std::cout << "\n-----------------------\n";

  // Testing Lab 6C/D
  std::cout <<"\nRuns Lab6C/D with word doggo and keyword yes.\n";
  std::cout << "Original: " << input << "\n";
  std::string viginereencrypt = encryptVigenere(input, "yes");
  std::cout << "Viginere Encrypted: " << viginereencrypt;
  std::cout << "\n Viginere Decrypted: " << decryptVigenere(viginereencrypt, "yes");
  return 0;
}
