/*
    Given an integer n, add a dot (".") as the thousands separator and return it in string format.
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main()
{
    // Declare and initialize empty string literal
    string res = "";
    // The limit is 2,147,483,647
    int n;

    // User input
    cout << "Please enter an integer: ";

    cin >> n;

    // If 'n' is 0, then return 0
    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    int count = 1;

    // As long as n is greater than 0
    while (n > 0)
    {
        // If count % 4 == 0 (divisable by 4), that means we have reached a position in the string literal where we need to insert a '.'
        if (count % 4 == 0)
        {
            res = '.' + res;
        }
        else
        {
            // If not at a position of insertion, then use 'to_string(n % 10)' to obtain the last digit of 'n' and bind the name 'res' to it (and appending the 'res' from the previous step)
            // For the first iteration, 'res' is an empty string literal, but the subsequent steps will append a non-empty string literal 'res' to
            // For any 'n', the expression 'n % 10' will return the last digit of the number
            // For example--- 248 mod 10 is 8, 2381293 mod 10 is 3, and 999990 mod 10 is 0
            res = to_string(n % 10) + res;
            // The name 'res' now points to a string litearl (a character literal after the first time through) that is the last digit(s) of 'n' after each step of the loop
            // At each step, divide 'n' by 10 to move the decimal to the left by one digit--- 248 to 24.8, 2381293 to 238129.3, and 999990 to 99999.0
            // The next time around (whenever n > 0 is still true), to_string(n % 10) will simply return the second to last digit of n, and so on
            n /= 10;
        }
        // Increment count
        count++;
    }

    cout << res << endl;
    return 0;
}