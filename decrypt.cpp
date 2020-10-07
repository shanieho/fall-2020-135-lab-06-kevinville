#include <string>
#include "caesar.h"
#include "viginere.h"
std::string decryptCaesar(std::string ciphertext, int rshift){

    return encryptCaesar(ciphertext, -rshift); // shifting in the opposite direction will return the original ciphertext
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){

    int shift, length; // use this with the keyword to shift a word a certain amount, length will be used to loop the keyword length if it is too short ex plaintext is HELLO and word is YES

for (int i = 0; i < ciphertext.length(); i++) {

        if(length >= keyword.size()){ // loops back around if length is bigger than the keyword size entered but not the ciphertext length
            length = 0;
        }

        if(isupper(ciphertext[i])){
        shift = keyword[length] - 'A'; // will encrypt by shifting by [length] - a or A depending on case
        }
        else if (islower(ciphertext[i])){
            shift = keyword[length] - 'a';
        }
        if(ciphertext[i] != ' '){ // will increment if there is a space so we need to stop that
        
		ciphertext[i] = shiftChar(ciphertext[i], -shift); //sending text to shiftchar to be encrypted
        length++;
        }
	}
	return ciphertext; // returns finished encryption
}