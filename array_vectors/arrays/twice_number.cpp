#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Declaration and initialize
    // Template parameters are the type and size of the array
    // Initialized with zeros
    array<int, 10> arr = {};

    // Iterate through 0:9, modifying each indexed element to take a value that is a multiple of 2
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i * 2;
    }

    // Print elements with range-based loop
    for (auto &i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}