#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> myarray;

    // Assign some values
    for (int i = 0; i < 10; i++)
        myarray[i] = i;

    // Print content
    std::cout << "myarray contains:";
    for (int i = 0; i < 10; i++)
        std::cout << ' ' << myarray[i];
    std::cout << '\n';

    return 0;
}