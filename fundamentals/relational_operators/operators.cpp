/*
     > greater than
     >= greater than or equal to
     < less than
     <= less than or equal to
     == logical equality
     != logical inequality
*/

#include <iostream>
using namespace std;

int main()
{
    // Use boolalpha manipulator to print out text of the boolean
    cout << boolalpha;

    int a = 12;
    int b = 17;

    cout << (a < b) << endl;
    cout << (a > b) << endl;

    bool res = (a == b);
    cout << res << endl;

    return 0;
}