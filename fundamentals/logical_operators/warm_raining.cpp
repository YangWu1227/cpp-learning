#include <iostream>
#include <iomanip>
using namespace std;

/*
    a && b if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated).
    a || b	if the left-hand side expression is true, the combined result is true (the right-hand side expression is never evaluated).
*/

int main()
{
    bool isRaining = true;
    bool isWarm = false;

    cout << boolalpha << endl;
    // True and false is false
    cout << "And " << (isRaining && isWarm) << endl;
    // True or false is true
    cout << "Or " << (isRaining || isWarm) << endl;
    // Not true is false
    cout << "Not " << (!isRaining) << endl;

    return 0;
}