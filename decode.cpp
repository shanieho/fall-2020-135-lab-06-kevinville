#include <cmath>
#include "decode.h"
#include "decrypt.h"
#include "funcs.h"

std::string decode(std::string ciphertext){
	std::string words [26]; // stores each part of the array after being decrypted
	double distance[26] = {0}; 
	double freq[] = {8.2, 1.5, 2.8, 4.3, 13, 2.2, 2, 6.1, 7, 0.15, 0.77, 4, 2.4, 6.7, 7.5, 1.9, 0.095, 6, 6.3, 9.1, 2.8, 0.98, 2.4, 0.15, 2, 0.074}; // all letter frequencies according to wikipedia
	double freq2[26]; 
	double dist2[26]; // defining variables to use in storing and calculating distance all with 26 elements due to each letter in alphabet
	int	length = 0; 

	for (int i = 0; i < 26; i++){
		int total[26] = {0}; // used to check for case and adjust appropriately
		words[i] = decryptCaesar(ciphertext, i); // will decrypt all possibilities 
		std::string temp = words[i]; //transferring into a temp variable
		
		for (int i = 0; i < temp.length(); i++){
			if (islower(temp[i])){
				total[temp[i] - 'a']++;
			}
			else if (isupper(temp[i])){
				total[temp[i] - 'A']++;
			}
		}
		for (int i = 0; i < 26; i++){
			freq2[i] = (double)total[i] / temp.length() * 100; // converting ascii into double
		}
		for (int i = 0; i < 26; i++){
			dist2[i] = pow(freq2[i] - freq[i], 2); // distance formula
		}
		
		for (int z = 0; z < 26; z++){
	    	distance[i] += dist2[z]; //setting dist2 to a different array to be tested
		}
	}
	for (int i = 1; i < 26; i++){
		if (distance[i] < distance[length]){ // testing for shortest length and returning
			length = i;
		}
	}
	return words[length];
}