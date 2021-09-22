/*
* Class: CMSC140
* Program : Project 4
* Instructor : Najmeh Abedzadeh
* Description : Write a program that calculates the average number of days a company's employees 
  are absent during the year and outputs a report on a file named "employeeAbsences.txt".  
* Due : 04 / 18 / 2021
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Emran Abbamacha
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototype
int numEmployees();
double totalDaysAbsent(ofstream&, int);
void averageAbsent(ofstream&, double, int);
void ending();

int main()
{
	ofstream empFile("employeeAbsences.txt");

	int numOfEmployees = numEmployees();

	double totalNumOfDays = totalDaysAbsent(empFile, numOfEmployees);

	averageAbsent(empFile, totalNumOfDays, numOfEmployees);

	empFile.close();

	ending();

	return 0;
}
int numEmployees() {

	int numOfEmployees;
	cout << "Calculate the average number of days a company's employees are absent: " << endl;
	cout << "Please enter the number of employees in the company: ";
	cin >> numOfEmployees;
	cin.ignore();
	return numOfEmployees;
}

double totalDaysAbsent(ofstream& empFile, int numOfEmployees) {


	//ofstream empFile("employeeAbsences.txt");
	int employeeID, absentDays;
	const int MIN_DAYS = 0, MIN_EMPLOYEES = 1;
	double totalNumOfDays = 0;

	empFile << "EMPLOYEE ABSENCE REPORT\n";
	empFile << "Employee ID \t" << "Days Absent\n";

	for (int count = 1; count <= numOfEmployees; count++) {
		cout << "Please enter an employee ID: ";
		cin >> employeeID;

		while (employeeID < MIN_EMPLOYEES) {
			cout << "The employee ID must not be less than one.\n";
			cout << "Please re-enter the employee ID: ";
			cin >> employeeID;
		}

		cout << "Please enter the number of days this employee was absent: ";
		cin >> absentDays;

		while (absentDays < MIN_DAYS) {
			cout << "The number of days must not be megative.\n";
			cout << "Please re-enter the number of days absent: ";
			cin >> absentDays;
		}
		empFile << employeeID;
		empFile << "\t\t" << absentDays << endl;

		totalNumOfDays += absentDays;
	}
	return totalNumOfDays;
}

void averageAbsent(ofstream& empFile, double totalNumOfDays, int numOfEmployees) {

	//ofstream empFile("employeeAbsences.txt");

	double avgDaysAbsent = totalNumOfDays / numOfEmployees;
	empFile << fixed << showpoint << setprecision(1);
	empFile << "\nThe " << numOfEmployees << " employees were absent a total of " << totalNumOfDays << " days." << endl;
	empFile << "The average number of days absent is " << avgDaysAbsent << " days." << endl;
	empFile << "\nProgrammer: Emran";
}

void ending() {

	const string programmerName = "Emran Abbamacha", assignmentName = "CMSC140 Employee Absence Calculator", dueDate = "04 / 18 / 21";
	cout << "\n\nThank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " + programmerName << endl;
	cout << assignmentName << endl;
	cout << "Due Date: " + dueDate << endl;
}