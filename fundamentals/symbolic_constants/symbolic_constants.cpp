#include <iostream>
#include <string>
using namespace std;

int main()
{
    // The value of a symbolic constant, once initialized, cannot be changed
    // For constants, the naming convension is capitalized snake case
    const double MY_PI = 3.141483647;
    // Non-constants use camel case
    double taxRate = 0.14;

    // Example
    const string MY_NAME = "Yang Wu";

    cout << "My name is " << MY_NAME << endl;

    return 0;
}