/*
    There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves,
    judge if this robot ends up at (0, 0) after it completes its moves. You are given a string moves that represents
    the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left),
    'U' (up), and 'D' (down). Return true if the robot returns to the origin after it finishes all of its moves, or
    false otherwise.
*/
#include <iostream>
#include <vector>
using namespace std;

/* -------------------------- Function declarations ------------------------- */

// Pass by reference
void fillVector(vector<char> &);
// fillVector
// @param vector<char> - The vector of moves to be filled

/* ------------------------------ Main function ----------------------------- */

int main()
{
    // Declare vector
    vector<char> moves;
    // Declare initial displacement
    int vertDisplacement = 0;
    int horizDisplacement = 0;

    // Fill vector with user input
    fillVector(moves);

    for (const char &move : moves)
    {
        switch (move)
        {
        case 'l':
            horizDisplacement--;
            break;
        case 'r':
            horizDisplacement++;
            break;
        case 'u':
            vertDisplacement++;
            break;
        case 'd':
            vertDisplacement--;
            break;
        }
    }

    cout << boolalpha << (horizDisplacement == 0 && vertDisplacement == 0) << endl;

    return 0;
}

/* -------------------------- Function definitions -------------------------- */

void fillVector(vector<char> &newMyVector)
{
    // Declare input
    char input;
    // User input (priming read to make sure we can get into the while loop)
    cout << "Please type in a list of characters 'l', 'r', 'u', or 'd' (type 's' to stop): ";
    cin >> input;

    // As long as the user inputs something other than 's', keep appending it to the vector
    while (input != 's')
    {
        newMyVector.push_back(input);
        // Obtain next input
        cin >> input;
    }
    cout << endl;
}