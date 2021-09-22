
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	string studentName;

	cout << "Enter the Student's name: ";
	getline(cin, studentName);

	double scoreParticipation, scoreTest, scoreAssignment, scoreExam, scorePractice;
	double scoreFinal, scoreAverage;

	cout << "Enter Class Participation Score ranging from 0 to 100: ";
	cin >> scoreParticipation;
	
	while (scoreParticipation < 0 || scoreParticipation > 100) { //loops until user enters a number between 0-100
		cout << "ERROR! Please enter a value between 0 and 100" << endl;
		cout << "Enter Class Participation Score ranging from 0 to 100: ";
		cin >> scoreParticipation;
	}

	cout << "Enter Test Score ranging from 0 to 100: ";
	cin >> scoreTest;

	while (scoreTest < 0 || scoreTest > 100) { //loops until user enters a number between 0-100
		cout << "ERROR! Please enter a value between 0 and 100" << endl;
		cout << "Enter Test Score ranging from 0 to 100: ";
		cin >> scoreTest;
	}

	cout << "Enter Assignment Score ranging from 0 to 100: ";
	cin >> scoreAssignment;

	while (scoreAssignment < 0 || scoreAssignment > 100) { //loops until user enters a number between 0-100
		cout << "ERROR! Please enter a value between 0 and 100" << endl;
		cout << "Enter Assignment Score ranging from 0 to 100: ";
		cin >> scoreAssignment;
	}

	cout << "Enter Exam Score ranging from 0 to 100: ";
	cin >> scoreExam;

	while (scoreExam < 0 || scoreExam > 100) { //loops until user enters a number between 0-100
		cout << "ERROR! Please enter a value between 0 and 100" << endl;
		cout << "Enter Exam Score ranging from 0 to 100: ";
		cin >> scoreExam;
	}

	cout << "Enter Practice Score ranging from 0 to 100: ";
	cin >> scorePractice;

	while (scorePractice < 0 || scorePractice > 100) { //loops until user enters a number between 0-100
		cout << "ERROR! Please enter a value between 0 and 100" << endl;
		cout << "Enter Practice Score ranging from 0 to 100: ";
		cin >> scorePractice;
	}

	scoreFinal = (scoreParticipation + scoreTest + scoreAssignment + scoreExam + scorePractice);
	scoreAverage = (scoreFinal / 5) ;

	cout << studentName << ": Final Score: " << scoreFinal << " Average Score: " << fixed << setprecision(1) << scoreAverage << endl;
	cout << "\nStudent name: Emran Abbamacha\n \tCMSC140, CRN33087\n";
	
	return 0;
}
