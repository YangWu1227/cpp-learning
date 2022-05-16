#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Set seed
    srand(time(nullptr));

    // Priming read
    int randNum = rand() % (100 - 1 + 1) + 1;

    // Declare guess variable
    int guess;
    // Declare count variable fo number of guesses
    int count = 1;

    do
    {
        // Prompt
        cout << "Please enter your guess: " << '\n';
        cin >> guess;

        // Selection on guess
        if (guess < 1 || guess > 100)
        {
            cout << "Your guess must be between 1 and 100, inclusive" << '\n';
        }
        else if (guess < randNum)
        {
            cout << "Your guess is too low" << '\n';
        }
        else if (guess > randNum)
        {
            cout << "Your guess is too high" << '\n';
        }

        // Increment cout
        count++;

    } while (guess != randNum);

    // If the while never finishes, i.e., guess != randNum, we would never get to this statement
    cout << "Congratulations! You guessed the number in " << count << "tries" << endl;

    return 0;
}