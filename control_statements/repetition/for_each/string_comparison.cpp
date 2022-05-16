#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Declare and initialize
    string word1[4] = {"y", "an", "gwu", ""};
    string word2[4] = {"ya", "", "n", "gwu"};
    // Declare
    string str1, str2;

    // For each
    for (auto &element : word1)
        str1 += element;
    for (auto &element : word2)
        str2 += element;

    // The compare member function return 0 if the two strings compare equal and non-zero if they do not
    if (str1.compare(str2) == 0)
    {
        cout << "The strings compare equal" << endl;
    }
    else if (str1.compare(str2) != 0)
    {
        cout << "The strings do not compare equal" << endl;
    }

    return 0;
}