#include <iostream>
#include <cstdlib>
#include <string>
#include "CharString.h"

using namespace std;

void seperateInt(string&, int&);

int main()
{

    string inputString;
    int timeLimit = 0;

    // Take in data
    cout << "Time Limit: ";
    getline(cin, inputString);

    // Seperate data into int and sec, min, hour
    // TODO: Create char string library to modify string to how I like.
    seperateInt(inputString, timeLimit);


    // Create some kind of timer based on information

    return 0;

}

void seperateInt(string& myString, int& value)
{

    int count = 0;
    while( )

}

// Create easy timer for desktop
