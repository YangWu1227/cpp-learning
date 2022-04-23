#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{

    // Prompt message to user
    cout << "Please enter three real numbers, seperated by white spaces:" << endl;

    // Declare variables
    double a, b, c;

    //
    /* Each call to operator>>(istream&, T) (where T is some arbitrary type) returns a reference to its first argument.
    So cin >> a returns cin, which can be used as (cin>>a)>>b and so forth. This is called 'Operator Chaining.'
    */
    cin >> a >> b >> c;

    // Also possible to put this expression directly next to the stream insertion operator '<<':
    double avg = (a + b + c) / 3;

    // Report average
    cout << "The average is " << avg << endl;

    return 0;
}