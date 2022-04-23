/*
    Arithmetic operators

    +   addition operator
    -   subtraction operator
    *   multiplication operator
    /   division operator
    %   modulus operator

    Compound assignment operators

    y += x is equivalent to y = y + x;
    x -= 5 is equivalent to	x = x - 5;
    x /= y is equivalent to	x = x / y;
    price *= units + 1 is equivalent to price = price * (units+1);

    Increment and decrement
    ++  increment by 1
    --  decrement by 1
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize literal constants
    int a = 17;
    int b = 12;
    // The variables 'a' and 'b' are operands
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    double quo = a / b;
    double mod = a % b;

    cout << "Sum  is " << sum << endl;
    cout << "Difference  is " << diff << endl;
    cout << "Product  is " << prod << endl;
    cout << "Quotient  is " << quo << endl;
    cout << "Modulus  is " << mod << endl;

    // Compound assignment operators
    double res = 12.27;
    res += 7;
    cout << "Result is " << res << endl;
    res -= 2;
    cout << "Result is " << res << endl;
    res *= 3;
    cout << "Result is " << res << endl;
    res /= 2;
    cout << "Result is " << res << endl;

    // Increment and decrement
    int resTwo = 12;
    cout << "Result was originally " << resTwo << endl;
    resTwo++; // Equivalent to resTwo += 1 or resTwo = resTwo + 1
    cout << "Result is incremented to " << resTwo << endl;

    resTwo--; // Equivalent to resTwo -= 1 or resTwo = resTwo - 1
    cout << "Result is again decremented back to " << resTwo << endl;

    return 0;
}