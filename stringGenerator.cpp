//Monica Amezquita
//Data Structures 212
#include <string>
#include <ctime> 
#include <stdlib.h>    
#include "stringGenerator.h"

using namespace std;


void generateStrings(string ary[], int size){
	srand(time(NULL));
	int length = 0, type = 0;
	string randomWord; 
	char character;
	for (int i = 0; i < size; i++){
		string randomWord;
		length = rand() % 15 + 1;
		for (int j = 0; j < length; j++){
			type = rand() % 100;
			if (type < 10){
				character = rand() % 26 + 'a';

			} else if (10 < type && type < 20)
			{
				character = rand() % 10 + '0';
			} else {
				character = rand() % 15 + '!';
			}
			randomWord += character;
		}
		ary[i] = randomWord;
	}
}