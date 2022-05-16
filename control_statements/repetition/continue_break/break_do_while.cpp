#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    do
    {
        if (i == 3)
        {
            break;
        }
        cout << i << "\n";
        i++;
    } while (i < 5);
}