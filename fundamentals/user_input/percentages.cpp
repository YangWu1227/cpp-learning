#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare but not initialize
    string fullName, location;
    int initialScore;

    cout << "Please Enter Your Score" << endl;

    cin >> initialScore;

    // The stream extraction operator does not consume the newline character
    // Generally, cin with an extraction operator (>>) terminates when whitespace is found
    // However, cin.get() reads a string with the whitespace
    cin.get();

    cout << "Please Enter Your Full Name" << endl;

    // Getline consumes the newline character
    getline(cin, fullName);

    cout << "Please Enter Your Location" << endl;

    getline(cin, location);

    cout << "Hello " << fullName << " from " << location << "; your initial score is " << initialScore << '\n'
         << "However, with 7 points added, your score becomes " << (initialScore + 7) << endl;

    return 0;
}