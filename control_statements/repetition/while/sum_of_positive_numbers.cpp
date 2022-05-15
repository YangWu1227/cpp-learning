/*
    A program to find the sum of positive numbers.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Declare
    int number;
    // Declare and initialize
    int sum = 0;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> number;

    // This condition evaluates to false if user supplies a negative number, which ends the loop
    // Since this is not a do...while, the negative number entered will not be added to the 'sum' as the code block does not run
    while (number >= 0)
    {
        // Add all positive numbers
        sum += number;

        // Take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    // Display sum
    // Use a new line character to create some seperation
    cout << '\n'
         << "The sum is "
         << sum
         << endl;

    return 0;
}