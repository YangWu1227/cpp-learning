#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Use unix epoch time (01-01-1970) as the seed for the rng
    srand(time(nullptr));

    // Scale random number to be between 0 (inclusive) and 10 (not inclusive)
    int val1 = rand() % 10;

    // Scale random number to be between 1 (inclusive) and 10 (also inclusive)
    int val2 = rand() % 10 + 1;

    cout << val1 << '\n'
         << val2 << endl;

    return 0;
}
