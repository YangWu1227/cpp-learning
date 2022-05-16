#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

/* -------------------------- Function declaration -------------------------- */

int getPrice(int, char);
// @param int - Number of james purchased
// @param char - Package alias

int checkPackage(char);
// @param char - Package alias

int main()
{
    // Declarations
    int numJams;
    char package;
    // User prompts
    cout << "Please type in your selected package (possible values are 'A' through 'C'): ";

    cin >> package;

    cout << "Please type the number of jams you purchased: ";

    cin >> numJams;

    // Compute cost
    int cost = getPrice(numJams, package);

    // Report cost to user
    cout << "Your monthly fee totals to " << cost << "$" << endl;

    return 0;
}

/* --------------------------- Function definition -------------------------- */

int getPrice(const int numJam, const char package)
{
    // Declare cost
    int cost;

    // Compute cost given number of jams and package
    switch (package)
    {
    case 'A':
    case 'a':
    {
        // If more than 2 jams, 'extra' cost will be > 0
        int extra_a = (numJam > 2) ? (numJam - 2) * 5 : 0;
        cost = 8 + extra_a;
        break;
    }
    case 'B':
    case 'b':
    {
        // If more than 4 jams, 'extra' cost will be > 0
        int extra_b = (numJam > 4) ? (numJam - 4) * 4 : 0;
        cost = 12 + extra_b;
        break;
    }
    case 'C':
    case 'c':
    {
        // If more than 4 jams, 'extra' cost will be > 0
        int extra_c = (numJam > 6) ? (numJam - 6) * 3 : 0;
        cost = 15 + extra_c;
        break;
    }
    default:
    {
        cout << "Invalid input for package" << endl;
        break;
    }
    }

    return cost;
}
