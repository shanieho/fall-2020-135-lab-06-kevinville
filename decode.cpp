#include <cmath>
#include "decode.h"
#include "decrypt.h"
#include "funcs.h"

std::string decode(std::string ciphertext){
	std::string words [26]; 
	double distance[26] = {0}; 
	double freq[] = {	8.2, 1.5, 2.8, 4.3, 13,2.2, 2, 6.1, 7, 0.15,0.77, 4, 2.4, 6.7, 7.5,1.9, 0.095, 6, 6.3, 9.1,2.8, 0.98, 2.4, 0.15, 2,0.074}; 
	for (int i = 0; i < 26; i++){
		words[i] = decryptCaesar(ciphertext, i);
		std::string& temp = words[i]; 
		int total[26] = {0}; 
		double freq2[26]; 
		double dist2[26]; 
		for (int i = 0; i < temp.length(); i++){
			if (islower(temp[i])){
				total[temp[i] - 'a']++;
			}
			else if (isupper(temp[i])){
				total[temp[i] - 'A']++;
			}
		}
		for (int i = 0; i < 26; i++){
			freq2[i] = (double)total[i] / temp.length() * 100;
		}
		for (int i = 0; i < 26; i++){
			dist2[i] = pow(freq2[i] - freq[i], 2);
		}
		for (int z = 0; z < 26; z++){
	    	distance[i] += dist2[z];
		}
	}
	int	length = 0; 
	for (int i = 1; i < 26; i++){
		if (distance[i] < distance[length]){
			length = i;
		}
	}
	return words[length];
}