/*
    The break statement can only be used in a looping statement or switch-case statement.
*/
#include <iostream>
using namespace std;

int main()
{
    // Priming read
    int i = 0;
    while (i < 20)
    {
        // Once i reaches 7, break out of the loop
        // This conditional block is run before 'cout' and so the number 7 will not be printed out
        if (i == 7)
        {
            break;
        }
        cout << i << '\n';
        i++;
    }
}