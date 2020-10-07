#include <string>

char shiftChar(char c, int rshift){
    rshift = rshift % 26; // if rshift is greater than 26 then loop back around. Ex: rshift is 29 then shift 4 right
    char result, letter; // to be used in determining upper/lower case and returning result
    int asciicheck; // checking the ascii value of the characters

    if(isupper(c)){ // checking if letter is uppercase 
        letter = 'A';
    }
    else if(islower(c)){ // checking if letter is lowercase
        letter = 'a';
    }
    else{
        result += c; // not a letter
    }

    asciicheck = (c - letter) + rshift; //sets character to ascii plus shift to be checked

    if(asciicheck > 26){
        asciicheck = asciicheck - 26; // if the ascii value is greater than the alphabet then it resets to zero
    } 
    else if(asciicheck < 0){
        asciicheck = asciicheck + 26; // if the ascii value is less than the alphabet at a then it resets to zero
    }
    result += letter + asciicheck; // 
    return result;
    }


std::string encryptCaesar(std::string plaintext, int rshift){

    for (int i = 0; i < plaintext.length(); i++) {
		plaintext[i] = shiftChar(plaintext[i], rshift); //sending text to shiftchar to be encrypted
	}
	return plaintext;
}