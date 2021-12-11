#include <iostream>
using namespace std;

int main()
{
	// We have a type specifier and an 'identifier' or 'variable', and this is called a statement ending in ';'
	// The c++ convention is to use camel case 'myVariable' (first word is lower case but subsequent words are capitalized)
	int myInt;
	// 15 is also a literal constant
	// THis is a variable initialization
	// The '=' is called an assignment operator (same as Python and different from R)
	myInt = 15;

	// Declare and initialize all in one line
	double myDouble = 97.1227;

	// Multiple variable seperated by the stream insertion operator << including a '\n' newline
	// We could have also used another cout << variable << endl;
	cout << myInt << '\n'
		 << myDouble << endl;

	return 0;
}