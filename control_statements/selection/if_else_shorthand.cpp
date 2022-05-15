#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string gender;
    int age;
    // Prompt for user age and gender
    cout << "Please enter your age:";

    cin >> age;

    // Read a string with the whitespace
    cin.get();

    cout << "Please enter your gender:";

    getline(cin, gender);

    // Females over the age of 65 qualify for discounts
    string result = ((gender == "Female" || gender == "female") && age >= 65) ? "You qualify for the discount" : "You do not qualify for the discount";

    cout << result << endl;

    return 0;
}