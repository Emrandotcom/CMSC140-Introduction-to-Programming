#include <iostream>

#include <string>

#include <fstream>

using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("list.txt");
	
	string userName, userAddress, userNumber;

	cout << "What is your name?" << endl;
	getline(cin, userName);

	cout << "\nWhat is your phone number?\n";
	getline(cin, userNumber);

	cout << "\nWhat is your address?\n";
	getline(cin, userAddress);

	outputFile << userName << endl;
	outputFile << userNumber << endl;
	outputFile << userAddress << endl;
	outputFile.close();

	cout << "\nThe file was saved" << endl;

	ifstream inputFile;
	string name, number, address;
	inputFile.open("list.txt");

	cout << "Reading data from the list.txt file" << endl;

	getline(inputFile, name);
	cout << "Name: \t" << name << endl;

	getline(inputFile, number);
	cout << "Phone Number: \t" << number << endl;

	getline(inputFile, address);
	cout << "Address: \t" << address << endl;
	inputFile.close();

	return 0;
}
