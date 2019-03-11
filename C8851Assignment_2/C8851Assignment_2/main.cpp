#pragma once
#include <iostream>

#include "dsexceptions.h"
#include <algorithm>
using namespace std;

int main() {

	//why use poitner if we can just assign ip = var?

	int  var = 20;   // actual variable declaration.
	int  *ip;        // pointer variable 

	ip = &var;       // store address of var in pointer variable. Use of the "&"?

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}