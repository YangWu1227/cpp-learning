#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Declare variable
    int age;

    cout << "Welcome, please enter your age:" << endl;

    cin >> age;

    // Selection (decision)
    if (age >= 21)
    {
        cout << "Have a beer" << endl;
    }
    else if (age >= 18)
    {
        cout << "If you have a fake, I might still sell you a beer" << endl;
    }
    else
    {
        cout << "Sorry, you're too young to drink" << endl;
    }

    cout << "Thank you for coming" << endl;

    return 0;
}