#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> myint;
    std::cout << "size of myints: " << myint.size() << " elements" << std::endl;
    std::cout << "sizeof(myints): " << sizeof(myint) << " bytes" << std::endl;

    return 0;
}