/*
* Class: CMSC140
* Program : Project 2
* Instructor : Najmeh Abedzadeh
* Description : Program asks user for either weight, temperature or distance and does calculations accordingly. 
* Due : 03 / 07 / 2021
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Emran Abbamacha
*/

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string countryName;
    cout << "Enter a country name: ";
    getline(cin, countryName);
    
    cout << "\nConverter Toolkit" << endl;
    cout << "--------------------" << endl;
    cout << "\t1. Temperature Converter" << endl;
    cout << "\t2. Distance Converter" << endl;
    cout << "\t3. Weight Converter" << endl;
    cout << "\t4. Quit" << endl;

    int userChoice, userTemp, calculatedTemp;
    double userDist, calculatedDist, userWeight, calculatedWeight;

    cout << "\nEnter your choice (1-4): ";
    cin >> userChoice;

    while (userChoice < 1 || userChoice >4) { //loops to ask user for choice 1-4
        cout << "\nERROR! Please enter either 1, 2, 3, or 4" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> userChoice;
    }

    if (userChoice == 1) {
        cout << "Please enter temperature in Celsius: ";
        cin >> userTemp;
        calculatedTemp = (userTemp * 9)/5 +32; //converts celsius to fahrenheit
        cout << "\nIt is " << calculatedTemp << " degrees Fahrenheit." << endl;
    } 
    
    if (userChoice == 2) {
        cout << "Please enter distance in Kilometers: ";
        cin >> userDist;
        while (userDist < 0) { //loops to as user for positive number for distance
            cout << "\nERROR! Please enter a number greater than 0" << endl;
            cout << "Please enter distance in Kilometers: ";
            cin >> userDist;
        }
        
        calculatedDist = userDist * 0.6; //converts km to miles
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "\nIt is " << calculatedDist << " miles." << endl;
    }

    if (userChoice == 3) {
        cout << "Please enter weight in Kilograms: ";
        cin >> userWeight;
        while (userWeight < 0) { //loops to as user for positive number for weight
            cout << "\nERROR! Please enter a number greater than 0" << endl;
            cout << "Please enter weight in Kilograms: ";
            cin >> userWeight;
        }

        calculatedWeight = userWeight * 2.2; // converts kg to lb
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << "\nIt is " << calculatedWeight << " pounds." << endl;
    }

    if (userChoice == 4) {
    }
    cout << "\n" << countryName << " sounds fun!\n" << endl;

    //ENDING

    const string programmerName = "Emran Abbamacha", assignmentName = "CMSC140 Converter Toolkit Project", dueDate = "03 / 07 / 21";
    cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: " + programmerName << endl;
    cout << assignmentName << endl;
    cout << "Due Date: " + dueDate << endl;
   
    return 0;
}

