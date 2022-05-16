#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Loop
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            cout << "The number " << i << " is odd" << '\n';
        }
        else
        {
            cout << "The number " << i << " is even" << '\n';
        }

        cout << endl;
    }

    return 0;
}