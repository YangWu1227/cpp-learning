#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
    // Sequential statements (sequence statements)
    int age = 12;

    cout << age << endl;

    // Selection control statements (decision statements)
    if (age >= 21)
    {
        cout << "Old enough to drink" << endl;
    }
    else
    {
        cout << "Not old enough to drink" << endl;
    }

    // Repetition statements (loops)
    for (int i = 1; i <= age; i++)
    {
        cout << "Count " << i << endl;
    }

    return 0;
}