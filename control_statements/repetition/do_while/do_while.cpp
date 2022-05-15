/*
    You are given a large integer represented as an integer array 'digits', where each digits[i] is the ith digit of the integer. The digits are ordered
    from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's. Increment the large integer by
    one and return the resulting array of digits. The constraints are:

    * 1 <= digits.length <= 100
    * 0 <= digits[i] <= 9
    * digits does not contain any leading 0's.
*/
#include <iostream>
#include <vector>
using namespace std;

/* -------------------------- Function declarations ------------------------- */

// Pass by reference
void fillVector(vector<int> &);
// fillVector
// @param vector<int> - The vector to be filled

// Use const since we would not be modifying the vector referenced
void printVector(const vector<int> &);
// printVector
// @param vector<int> - The vector to be printed

/* ------------------------------ Main function ----------------------------- */

int main()
{
    // Declare vector
    vector<int> myVector;

    // Fill vector with user input
    fillVector(myVector);

    // Start index at the end of the vector
    int index = myVector.size() - 1;
    // For moving one decimal place to the left
    int carryOver = 0;

    // The increment operation needs to happen at least one time (if the digit is not 9)
    // If the digit to increment is 9, then incrementing that element would require modifying elements before that as well ('carrying' over the 1)
    do
    {
        /* --------------------------------- Step 1 --------------------------------- */

        // Increment the the last element
        myVector[index]++;

        /* --------------------------------- Step 2 --------------------------------- */

        // If the element incremented above happened to be 9, then 'myVector[index]' will be 10 and 'myVector[index] / 10' will be 1
        // Otherwise, 'myVector[index] / 10' will result in a fraction
        // Because 'carryOver' is declared to have integer type, 'carryOver' will be 0 in those cases where 'myVector[index]' was not 9 before we incremented it
        carryOver = myVector[index] / 10;

        /* --------------------------------- Step 3 --------------------------------- */

        // Since the elements in myVector is contrained to be between 0 and 9, the statement below will always simply return the int itself
        // This is because, for any number 'n' less than 10, n %= 10 is 'n'
        myVector[index] %= 10;

        /* --------------------------------- Step 4 --------------------------------- */

        // Decrement index
        index--;

        // As long as carryOver is 1 and the vector has not been traversed completed, keep incrementing
    } while (carryOver and index >= 0);

    /*
        There are two possibilities when the while loop terminates. First case: we traversed the entire vector and (index >= 0) becomes false;
        in that case, 'carryOver' will still be 1 as in the case of, say, [9, 9, 9, 9]. Second case: 'carryOver' could become 0 at any step
        and this will lead the while loop to terminate early
    */

    // For the first case, because all numbers in the vector are 9's, incrementing each of them ultimately led use to add a 1 to the vector--- for instance, 999 to 1000
    if (carryOver)
    {
        // The arguments are 'position', 'val', and 'n'
        // Insert one int value 1 to the begining of the vector pointed to be the iterator 'myVector.begin()'
        myVector.insert(myVector.begin(), 1, carryOver);
    }

    // Print resulting vector
    printVector(myVector);

    return 0;
}

/* -------------------------- Function definitions -------------------------- */

void fillVector(vector<int> &newMyVector)
{
    // Declare input
    int input;
    // User input (priming read to make sure we can get into the while loop)
    cout << "Please type in a list of numbers (type -1 to stop): ";
    cin >> input;

    // As long as the user inputs something other than -1, keep appending it to the vector
    while (input != -1)
    {
        newMyVector.push_back(input);
        // Obtain next input
        cin >> input;
    }
    cout << endl;
}

void printVector(const vector<int> &newMyVector)
{
    for (unsigned int i = 0; i < newMyVector.size(); ++i)
    {
        cout << newMyVector[i] << " ";
    }
    cout << endl;
}