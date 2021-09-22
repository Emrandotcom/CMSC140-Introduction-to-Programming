#include <iostream>

#include <string>

using namespace std;

int main() {

	cout << "(I)" << endl;

	for (int i = 1; i <= 1; i++) {            // I

		for (int j = 1; j <= 10; j++) {

			cout << "*";

		}

	}

	cout << endl;

	cout << "\n(II)" << endl;

	for (int i = 1; i <= 1; i++) {            // I

		for (int j = 1; j <= 20; j++) {

			cout << "*";

		}
	}
	cout << endl;

	cout << "\n(III)" << endl;

	for (int i = 1; i <= 10; i++) {           // III

		for (int j = 1; j <= i; j++) {

			cout << "*";
		}
		cout << endl;
	}

	cout << "\n(IV)" << endl;
	
	for (int i = 1; i <= 20; i++) {           // IV

		for (int j = 1; j <= i; j++) {

			cout << "*";
		}
		cout << endl;
	}

	cout << "\n(V)" << endl;

	for (int i = 10; i >= 1; i--) {           // V

		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n(VI)" << endl;

	for (int i = 20; i >= 1; i--) {           // VI

		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}