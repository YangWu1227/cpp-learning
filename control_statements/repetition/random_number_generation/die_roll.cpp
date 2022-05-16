#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Set seed
    srand(time(nullptr));
    // Loop to generate 10 random numbers between 1 and 6
    for (int i = 0; i < 10; i++)
    {
        cout << rand() % (6 - 1 + 1) + 1 << '\n';
    }
    cout << endl;
    return 0;
}