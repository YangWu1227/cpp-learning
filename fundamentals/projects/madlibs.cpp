#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{

    // Declare variables
    string adj1, girlName, adj2, job1, placeName, cloth, hobby, adj3, job2, boyName, manName;

    /* ------------------------------------ 1 ----------------------------------- */

    cout << "Please enter an adjective:" << endl;

    getline(cin, adj1);

    /* ------------------------------------ 2 ----------------------------------- */

    cout << "Please enter a girl's name:" << endl;

    getline(cin, girlName);

    /* ------------------------------------ 3 ----------------------------------- */

    cout << "Please enter another adjective:" << endl;

    getline(cin, adj2);

    /* ------------------------------------ 4 ----------------------------------- */

    cout << "Please enter a job:" << endl;

    getline(cin, job1);

    /* ------------------------------------ 5 ----------------------------------- */

    cout << "Please enter a place:" << endl;

    getline(cin, placeName);

    /* ------------------------------------ 6 ----------------------------------- */

    cout << "Please enter a clothing product:" << endl;

    getline(cin, cloth);

    /* ------------------------------------ 7 ----------------------------------- */

    cout << "Please enter a hobby:" << endl;

    getline(cin, hobby);

    /* ------------------------------------ 8 ----------------------------------- */

    cout << "Please enter another adjective:" << endl;

    getline(cin, adj3);

    /* ------------------------------------ 9 ----------------------------------- */

    cout << "Please enter another job:" << endl;

    getline(cin, job2);

    /* ------------------------------------ 10 ----------------------------------- */

    cout << "Please enter a boy's name:" << endl;

    getline(cin, boyName);

    /* ------------------------------------ 11 ----------------------------------- */

    cout << "Please enter a man's name:" << endl;

    getline(cin, manName);

    // Return story string
    cout << "There once was a " << adj1 << " girl named " << girlName << " who was a " << adj2
         << " " << job1 << " in the kingdom of " << placeName << ". She loved to wear " << cloth
         << " and " << hobby << ". She wanted to marry the " << adj3 << " " << job2 << " named "
         << boyName << " but her father, King " << manName << " forbid her from seeing him." << endl;

    return 0;
}
