/*
* Class: CMSC140
* Program: Project 1 
* Instructor: Najmeh Abedzadeh
* Description: Robot takes a number from user and calculates different amounts of time and Robot does some simple math.
* Due: 02/28/2021
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Emran Abbamacha
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//PART 1
	string robotName = "Nao", userName;
	int ageGiven;
	
	cout << "Hello, welcome to Montgomery College! My name is " + robotName + ". May I have your name?" << endl;
	getline(cin,userName);
	cout << "Nice to have you with us today, " + userName + "!\n";
	cout << "Let me impress you with a small game.\n";
	cout << "Give me the age of an important person or a pet to you.\n";
	cout << "Please give me only a number: \n";
	cin >> ageGiven;
	cout << "You have entered: " << ageGiven << endl;

	int ageYears, ageMonths, ageDays, ageHours, ageMinutes, ageSeconds, ageDogYears, ageFishYears; // Ages to be displayed
	const int daysPerMonth = 30, aDogYear = 7, aFishYear = 5;

	ageMonths = ageGiven * 12; // calculates age in months
	ageDays = ageMonths * daysPerMonth; // calculates age in days
	ageHours = ageDays * 24; // calculates age in hours
	ageMinutes = ageHours * 60; // calculates age in minutes
	ageSeconds = ageMinutes * 60; // calculates age in seconds
	ageDogYears = aDogYear * ageGiven; // calculates age in dog years
	ageFishYears = aFishYear * ageGiven; // calculates age in fish years

	cout << "If this is for a person, the age can be expressed as: " << ageGiven << " years" << endl;
	cout << "or " << ageMonths << " months" << endl;
	cout << "or " << ageDays << " days" << endl;
	cout << "or " << ageHours << " hours" << endl;
	cout << "or " << ageMinutes << " minutes" << endl;
	cout << "or " << ageSeconds << " seconds" << endl;
	cout << "If this is for a dog, it is " << ageDogYears << " years old in human age." << endl;
	cout << "If this is for a gold fish, it is " << ageFishYears << " years old in human age." << endl;

	//PART 2

	int num1, num2, addNum, divNum;
	
	cout << "Let's play another game, " << userName << ". Give me a whole number." << endl;
	cin >> num1;
	cout << "Very well. Give me another whole number." << endl;
	cin >> num2;
	
	addNum = num1 + num2;
	divNum = num1 / num2;
	
	cout << "Using the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << addNum << "." << endl;
	cout << "Using the operator '/' in C++, the result of " << num1 << " / " << num2 << " is " << divNum << endl;
	cout << "however, the result of " << (float)num1 << "/" << (float)num2 << " is about " << (float)num1 / (float)num2 << "." << endl;

	//ENDING

	const string programmerName = "Emran Abbamacha", assignmentName = "CMSC140 Robot Greeting Project", dueDate = "02 / 28 / 21";
	cout << "\nThank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " + programmerName << endl;
	cout << assignmentName << endl;
	cout << "Due Date: " + dueDate << endl;
		return 0;
}
