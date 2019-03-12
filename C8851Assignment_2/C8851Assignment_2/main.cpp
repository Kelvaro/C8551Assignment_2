#pragma once
#include <iostream>
#include "stdlib.h"
#include "malloc.h"
#include <string>
#include <ctime>
#include <list>
#include "dsexceptions.h"
#include <chrono>

#include <algorithm>
using namespace std;
using namespace std::chrono;


int main() {

////////////////////////QUESTION 3a)///////////////////////////////////
	bool match = false;
	bool match2 = false;
	int numbers[] = { 8,4,1,6 };


	int k;
	for (int i = 0; i < (sizeof(numbers) / sizeof(*numbers)); i++) {
		std::cout <<"you have number: " << numbers[i] << std::endl;
	}

	cout << "enter the number you want to compare: " << endl;
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cin >> k;


	for (int a = 0; a < (sizeof(numbers) / sizeof(*numbers)); a++) {
		for (int b = 0; b < (sizeof(numbers) / sizeof(*numbers)); b++) {
			if (numbers[a] + numbers[b] == k) {
				//cout<< "two numbers match!"<<endl;
				match = true;
			}
			else {
				//cout << "no matches found!" << endl;
				match = false;
			}
		}
	}

	/*if (match = true) {
		cout << "2 numbers match!" << endl;
	}*/
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

	cout << "It took me " << time_span.count() << " seconds." << endl;;
////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////QUESTION 2b)///////////////////////////////
	high_resolution_clock::time_point t3 = high_resolution_clock::now();
	int numbers2[] = { 8,4,1,6 };
	std::sort(numbers2, numbers2 + 3);

	for (int i = 0; i < (sizeof(numbers2) / sizeof(*numbers2)); i++) {
		std::cout << "you have number: " << numbers2[i] << std::endl;
	}

	for (int f = 0; f < (sizeof(numbers2) / sizeof(*numbers2)); f++) {
		for (int g = 0; g < (sizeof(numbers2) / sizeof(*numbers2)); g++) {
			if (numbers[f] + numbers2[g] == k) {
				//cout<< "two numbers match!"<<endl;
				match2 = true;
			}
			else {
				//cout << "no matches found!" << endl;
				match2 = false;
			}
		}
	}

	if (match2 = true) {
		cout << "2 numbers match!" << endl;
	}
	high_resolution_clock::time_point t4 = high_resolution_clock::now();

	duration<double> time_span2 = duration_cast<duration<double>>(t4 - t3);

	cout << "It took me " << time_span2.count() << " seconds.";
////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////QUESTION 2c)///////////////////////////

	/////////////////////////////Question 2b) ran much faster than Questoin 1a). For the results I have included an image in the package.

	return 0;
}

