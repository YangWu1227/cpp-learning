#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare but not initialize age variable
    int age;
    // Declare string literal
    string fullName;

    /* ----------------------------- String literal ----------------------------- */

    cout << "Please Enter Your Full Name" << endl;

    // Extracts characters from console until the delimitation character delim is found (or the newline character, '\n')
    getline(cin, fullName);

    // Echo fullName
    cout << fullName << endl;

    /* ----------------------------- Integer literal ---------------------------- */

    cout << "Please Enter Your Age" << endl;

    // The stream extraction operator extracts string from stream (the console)
    // For 'cin' and the string extraction operator, when a white space is encountered, the code considers that a terminator
    cin >> age;

    // Echo age
    cout << age << endl;

    return 0;
}