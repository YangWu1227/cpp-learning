#include <iostream>
#include <string>
using std::boolalpha;
using std::cout;
using std::endl;
using std::string;

int main()
{
    /* ------------------------------ Integer array ----------------------------- */

    // Constants use all upper case and underscore
    const int ARRAY_SIZE = 5;
    // Size declarer is initalized upon declaration
    // Could also use a constant literal, 5
    // This way the size is determined at compile time
    int myArray[ARRAY_SIZE];

    myArray[0] = 15;
    myArray[1] = 17;
    myArray[2] = 1;
    myArray[3] = 7;
    myArray[4] = 12;

    for (int &num : myArray)
    {
        cout << num << '\n';
    }

    cout << '\n';

    /* ------------------------------ String array ------------------------------ */

    string words[3] = {"Yang", "Ken", "Wu"};

    for (auto &word : words)
    {
        cout << word << '\n';
    }

    cout << '\n';

    /* ------------------------------ Double array ------------------------------ */

    // Omitting the size of so the array is just big enough to hold the initialization is created
    double nums[] = {2.2, 4.3, 9.7};

    for (auto &num : nums)
    {
        cout << num << '\n';
    }

    cout << '\n';

    /* ------------------------------ Boolean array ----------------------------- */

    // Container
    bool booleanArray[8];
    // Priming read
    int i = 0;
    // Populate array using for loop
    while (i <= 7)
    {
        booleanArray[i] = (i % 2 == 0);
        i++;
    }

    for (auto &boolean : booleanArray)
    {
        cout << boolalpha << boolean << '\n';
    }

    cout << '\n';

    /* ----------------------------- Character array ---------------------------- */

    char charArray[] = "Bye";
    int arraySize = sizeof(charArray);

    for (int i = 0; i < arraySize; i++)
    {
        cout << charArray[i] << '\n';
    }

    // Flush the stream
    cout << endl;

    return 0;
}