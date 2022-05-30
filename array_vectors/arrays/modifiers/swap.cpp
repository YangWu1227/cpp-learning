#include <iostream>
#include <array>

int main()
{
    // Declare and initialize
    std::array<int, 5> first = {10, 20, 30, 40, 50};
    std::array<int, 5> second = {11, 22, 33, 44, 55};

    /* ------------------------------- Before swap ------------------------------ */

    std::cout << "first used to have:";
    for (int &x : first)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "second used to have:";
    for (int &x : second)
        std::cout << ' ' << x;

    /* ---------------------------------- Swap ---------------------------------- */

    // Swap the contents of first and second
    first.swap(second);

    std::cout << "\n\n"
              << "A swap has taken place"
              << "\n\n";

    /* ------------------------------- After swap ------------------------------- */

    std::cout << "first now has:";
    for (int &x : first)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "second now has:";
    for (int &x : second)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}