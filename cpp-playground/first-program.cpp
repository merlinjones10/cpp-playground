
#include "first-program.hpp"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

enum timeOfDay {morn, noon, eve};

char* getDateTime() {
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}

string getUserEnergy() {
    int energyInt;
    cout << "Type a your energy between 0-10: ";
    cin >> energyInt;
    string ENERGY_STRING = to_string(energyInt);
    return ENERGY_STRING;
}

string getTimeOfDay() {
    // should really look into extracting the time data rather than user input
    timeOfDay t;
    string userInput;
    cout << "Is it a) morn, b) noon, c) eve: ";
    cin >> userInput;
    if (userInput == "a") t = morn;
    else if (userInput == "b") t = noon;
    else if (userInput == "c") t = eve;
    else {
        t = morn;
    }
    return to_string(t);
}


void energyTracker() {
    string comma = ", ";
    string x = getTimeOfDay();
    string userEnergy = getUserEnergy();
    string computedTime = getDateTime();
    string concatStr = x + comma + userEnergy + comma + computedTime + '\n';
    cout << concatStr << '\n';
}





/*
 
 
 Create a program that takes the users energy level three times a day
 Or/ (switch)
 Displays energy averages.

Write/Insert each result into a csv file as a psuedo database
    date (string), time (am, noon, pm), energy (int)

 
 Then calulate when user has the most energy....? print results?
 WORRY ABOUT THIS LATER AFTER FIRST HALF IS DONE
 
 
 
 
 */


// Example Input validation to consider
//int main()
//{
//    int a;
//    bool inputCompletionFlag = true;
//    do
//    {
//    cout<<"\nEnter a number:"
//    cin>>a;
//        if(cin.fail())
//        {
//            //Clear the fail state.
//            cin.clear();
//            //Ignore the rest of the wrong user input, till the end of the line.
//            cin.ignore(std::numeric_limits<std::streamsize>::max(),\
//                                                    '\n');
//        }
//        else
//        {
//            inputCompletionFlag = false;
//        }
//    }while(!inputCompletionFlag);
//    return 0;
//}
