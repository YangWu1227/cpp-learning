#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declare and initialize character literal
	// The convention is to use single quote for char type
	char singleChar = 'y';

	// Declare and initialize string literal
	// The convention is to use double quote for string type
	string myName = "Yang Wu";

	cout << singleChar << '\n'
		 << "Yo " << myName << endl;

	return 0;
}