#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char grade;

    cout << "Please enter your grade:" << endl;

    cin >> grade;

    // Switch
    // Allow for fallthrough for lower case input
    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "You are doing excellent" << endl;
        break;
    case 'B':
    case 'b':
        cout << "You did a great job" << endl;
        break;
    case 'C':
    case 'c':
        cout << "You may need some help" << endl;
        break;
    case 'D':
    case 'd':
        cout << "You are close to failing" << endl;
        break;
    case 'F':
    case 'f':
        cout << "You are failing the course" << endl;
        break;
    default:
        cout << "You must enter one of A, B, C, D, or F" << endl;
    }

    return 0;
}
