#include <iostream>
using namespace std;

int main()
{
	// Declare and initialize boolean
	bool isRaining = true;

	// Use the boolalpha manipulator to print the actually text of the boolean rather than the underlying integer
	cout << boolalpha << isRaining << endl;
	return 0;
}