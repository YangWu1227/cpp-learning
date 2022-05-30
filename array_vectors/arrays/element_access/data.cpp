#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Print the array elements
    cout << "The array elements are: ";
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << ' ' << *it << ' ';

    // The pointer 'it' points to the first element
    auto it = arr.data();

    cout << '\n'
         << "The first element pointed to by 'it' is " << *it << endl;

    return 0;
}