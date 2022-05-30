#include <iostream>
#include <array>

int main()
{
    // Create an array of 3 integers
    std::array<int, 3> myarray = {2, 16, 77};

    // Return references to the first and last elements
    std::cout << "front is: " << myarray.front() << std::endl;
    std::cout << "back is: " << myarray.back() << std::endl;

    // The direct references can be modified
    myarray.front() = 100;
    myarray.back() = 12;

    std::cout << "myarray now contains:";
    for (int &x : myarray)
        std::cout << ' ' << x;

    std::cout << '\n';

    return 0;
}