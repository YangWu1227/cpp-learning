/*
    Given an integer n, return true if it is a power of three. Otherwise, return false.
    An integer n is a power of three, if there exists an integer x such that n == 3^x
*/

#include <iostream>
#include <string>
#include <cmath>
using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;

// This solution does not scale well with large n
int main()
{

    // Declare but not initialize user input variable
    int n;

    cout << "Please Enter An Integer: ";
    cin >> n;

    // Cases where the integer given is either 0, 1, or not divisable by 3
    if (0 == n)
    {
        // 0 is not a power of three
        cout << boolalpha << false << endl;
        // Finish the program if that this case is run
        return 0;
    }
    else if (1 == n)
    {
        // 1 a power of three (since 3^0 = 1)
        cout << boolalpha << true << endl;
        // Finish the program if that this case is run
        return 0;
        ;
    }
    else if (0 != (n % 3))
    {
        // If 'n' modulus 3 is not 0, then 'n' is not divisable by 3 and so 'n' cannot be a power of three
        cout << boolalpha << false << endl;
        // Finish the program if that this case is run
        return 0;
        ;
    }

    // Declare loop control variable
    int nthPower = 0;

    // The pow function--- pow(a, b)-- returns a^b
    // As long as 'n' is larger than 3^nthPower, keep looping by incrementing 'nthPower'
    while (n > pow(3, nthPower))
    {
        // Increment
        nthPower++;

        // If 3^nthPower equals 'n', then we have found 'n' to be a power of three
        if (n == pow(3, nthPower))
        {
            cout << boolalpha << true << endl;
            // Finish the program if that this case is run
            return 0;
        }
    }

    // If the while loop completes (i.e., when n > 3^nthPower), and we still have not found a power in which we case raise 3 to get 'n', then 'n' is not a power of three
    cout << boolalpha << false << endl;

    return 0;
}