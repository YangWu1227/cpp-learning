#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int main()
{
    // Initializing the array elements
    array<int, 6> ar = {1, 2, 3, 4, 5, 6};

    // Printing array elements using get()
    // T is obtained implicitly from the array type
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

    return 0;
}