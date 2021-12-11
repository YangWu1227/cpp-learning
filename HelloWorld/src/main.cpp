#include <iostream>
// The include preprocessor directive, which is an instruction for the preprocessor--- include the 'iostream' library ('input/output' stream)
// The preprocessor does any work before the compiler converts source code to machine code
// Similar to R, the scope resolution operator can be used to disambiguate objects belong to different namespaces
using namespace std;

int main()
{
	// The 'cout' object stands for 'character output' or 'console output,' and the console is the default place where the cout object sends data to
	// The stream insertion operator << sends character data to the console, and it indicates the direction of the flow of the data, which flow from the right of the insertion operator into the console
	// The text are called 'string literal constant' and 'endl' inserts a new-line character and flushes the stream
	cout << "Hello world from Yang Wu, an aspiring data scientist" << endl;

	return 0;
}