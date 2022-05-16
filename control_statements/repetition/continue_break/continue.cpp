#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        // Only print the even numbers
        // Zero-indexed so we actually need i % 2 != 0
        if (i % 2 != 0)
        {
            // The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop
            continue;
        }
        cout << i << '\n';
    }

    return 0;
}