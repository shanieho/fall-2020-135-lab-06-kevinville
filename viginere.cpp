#include <string>
#include "caesar.h"
std::string encryptVigenere(std::string plaintext, std::string keyword){

    int shift, length; // use this with the keyword to shift a word a certain amount, length will be used to loop the keyword length if it is too short ex plaintext is HELLO and word is YES

for (int i = 0; i < plaintext.length(); i++) {

        if(length >= keyword.size()){ // loops back around if length is bigger than the keyword size entered but not the plaintext length
            length = 0;
        }

        shift = keyword[length] - 'a'; // will encrypt by shifting by [length] - a

        if(plaintext[i] != ' '){ // will increment if there is a space so we need to stop that

		plaintext[i] = shiftChar(plaintext[i], shift); //sending text to shiftchar to be encrypted
        length++;
        }
	}
	return plaintext; // returns finished encryption
}