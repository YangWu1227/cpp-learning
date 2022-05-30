#include <iostream>
#include <array>

int main()
{
    std::array<int, 6> myarray;

    // Fill the array with six integers, 5
    myarray.fill(5);

    std::cout << "myarray contains:";
    for (int &x : myarray)
    {
        std::cout << ' ' << x;
    }

    std::cout << '\n';

    return 0;
}