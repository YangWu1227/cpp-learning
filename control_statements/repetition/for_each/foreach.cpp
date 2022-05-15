#include <iostream>

int main()
{
    // Initialize array
    std::string colour[4] = {"Blue", "Red", "Orange", "Yellow"};

    for (const auto &element : colour) // Each element is a const (immutable) reference to the currently iterated array element
    {
        std::cout << element << std::endl;
    }
    return 0;
}