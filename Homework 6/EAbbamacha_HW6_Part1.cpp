#include <iostream>

#include <string>

using namespace std;

void getChoice(int &userChoice) {
	cout << "Enter your choice. 1 for Addition, 2 for Subtraction: ";
	cin >> userChoice;
}

void getNumbers(int &num1, int &num2) {
	cout << "What is the first number: ";
	cin >> num1;
	cout << "What is the second number: ";
	cin >> num2;
}

int useAddition(int num1, int num2) {
	int result = num1 + num2;
	return result;
}
int useSubtraction(int num1, int num2) {
	int result = num1 - num2;
	return result;
}

int main()
{
	int num1, num2;
	int userChoice;

	getChoice(userChoice);
	getNumbers(num1, num2);
	
	if (userChoice == 1) {
		cout << "The result of the operation is: " << useAddition(num1, num2) << endl;
	}

	if (userChoice == 2) {
		cout << "The result of the operation is: " << useSubtraction(num1, num2) << endl;
	}
	
	return 0;
}