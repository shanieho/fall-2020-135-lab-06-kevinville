#include <string>

char shiftChar(char c, int rshift){
    rshift = rshift % 26; // if rshift is greater than 26 then loop back around. Ex: rshift is 29 then shift 4 right
    char result;
    char letter; // to be used in determining upper/lower case

    if(isupper(c)){ // checking if letter is uppercase and encrypting
        result += char(int(c + rshift-65)%26 +65);
    }
    else if(islower(c)){ // checking if letter is lowercase and encrypting
        result += char(int(c + rshift-97)%26 +97);
    }
    else{
        result += c; // not a letter
    }
    return result;
    }


std::string encryptCaesar(std::string plaintext, int rshift){

    for (int i = 0; i < plaintext.length(); i++) {
		plaintext[i] = shiftChar(plaintext[i], rshift); //sending text to shiftchar to be encrypted
	}
	return plaintext;
}