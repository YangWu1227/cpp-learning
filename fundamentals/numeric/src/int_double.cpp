#include <iostream>
using namespace std;

// Return an integer
int main()
{
	// We have a type specifier and an 'identifier' or 'variable', and this is called a statement ending in ';'
	// The c++ convention is to use camel case 'myVariable' (first word is lower case but subsequent words are capitalized)
	int myInt;
	// 15 is also a literal constant
	// This is a variable initialization
	// The '=' is called an assignment operator (same as Python, Javascript but different from R's <-)
	myInt = 15;

	// Declare and initialize all in one line
	double myDouble = 97.1227;

	// Multiple variable seperated by the stream insertion operator << including a '\n' newline
	// We could have also used done this using two cout << variable << endl; statements
	cout << myInt << '\n'
		 << myDouble << endl;

	return 0;
}