//Monica Amezquita
//Data Structures 212

#include <cstdio.>
#include <string>
#include <iostream>

#include "radixSort.h"
#include "stringGenerator.h"
using namespace std;
const int SIZE = 10000;
int main(void) {
	string data[SIZE];
	generateStrings(data, SIZE);

	//BEFORE SORTING 
	cout << "Before Sorting" << endl;
	cout << "FIRST 10:" << endl;
	for (size_t i = 0; i < 10; i++) {
		printf("    %s\n", data[i].c_str());
	}

	cout << "MIDDLE 10:" << endl;
	for (size_t i = (SIZE/2) - 5; i < ((SIZE/2)+5); i++) {
		printf("    %s\n", data[i].c_str());
	}

	cout << "LAST 10:" << endl;
	for (size_t i = SIZE-10; i < SIZE; i++) {
		printf("    %s\n", data[i].c_str());
	}
	radixSort(data, (int)(sizeof(data) / sizeof(data[0])));

	//AFTER SORTING 
	puts("after sorting:");
	cout << "FIRST 10:" << endl;
	for (size_t i = 0; i < 10; i++) {
		printf("    %s\n", data[i].c_str());
	}

	cout << "MIDDLE 10:" << endl;
	for (size_t i = (SIZE / 2) - 5; i < ((SIZE / 2) + 5); i++) {
		printf("    %s\n", data[i].c_str());
	}

	cout << "LAST 10:" << endl;
	for (size_t i = SIZE - 10; i < SIZE; i++) {
		printf("    %s\n", data[i].c_str());
	}

	system("pause");
	return 0;
}