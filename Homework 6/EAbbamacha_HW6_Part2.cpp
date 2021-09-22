#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototypes
void showMenu();
double takePurchase(double, double);
double takePayment();
double displayInfo(double, double);

int main()
{
	const int COKE_CHOICE = 1, PEPSI_CHOICE = 2, WATER_CHOICE = 3, COFFEE_CHOICE = 4, EXIT_CHOICE = 5;
	const double COKE = 1.25, PEPSI = 1.00, WATER = 2.00, COFFEE = 1.50;
	int choice, quantity;
	double charges, payment;

	cout << fixed << showpoint << setprecision(3);

	do {
		showMenu();
		cin >> choice;

		while (choice < COKE_CHOICE || choice > EXIT_CHOICE) {
			cout << "Please enter a valid menu choice:  ";
			cin >> choice;
		}
		
		if (choice != EXIT_CHOICE) {
			cout << "How many do you want? ";
			cin >> quantity;
			payment = takePayment();

			switch (choice) {
			case COKE_CHOICE:
				charges = takePurchase(quantity, COKE);
				break;
			case PEPSI_CHOICE:
				charges = takePurchase(quantity, PEPSI);
				break;
			case WATER_CHOICE:
				charges = takePurchase(quantity, WATER);
				break;
			case COFFEE_CHOICE:
				charges = takePurchase(quantity, COFFEE);
				break;
			}
			displayInfo(charges, payment);
		}
		else
			cout << "Have a nice day!" << endl;

	} while (choice != EXIT_CHOICE);

	return 0;
}

void showMenu() {

	const double COKE = 1.25, PEPSI = 1.00, WATER = 2.00, COFFEE = 1.50, TAX = 0.06;

	cout << " \t******* Vending Machine ******* \n"
		 << "1. Coke \t$" << fixed << setprecision(2) << COKE
		 << "\n2. Pepsi \t$" << fixed << setprecision(2) << PEPSI
		 << "\n3. Water \t$" << fixed << setprecision(2) << WATER
		 << "\n4. Coffee \t$" << fixed << setprecision(2) << COFFEE
		 << "\n5. Exit Menu\n"
		 << "Enter your choice:  ";
}

double takePayment() {

	double payment;
	cout << "How much is your payment? ";
	cin >> payment;
	return payment;
}

double takePurchase(double quantity, double drink) {

	double charge;
	charge = (quantity * drink);
	return charge;
}

double displayInfo(double purchase, double payment){

	double taxAmount, totalPurchase, change;
	double taxPercent = 0.06;

	taxAmount = (purchase * taxPercent);
	totalPurchase = purchase + taxAmount;
	change = payment - totalPurchase;

	cout << "Tax Amount = $" << taxAmount << endl;
	cout << "Total Purchase = $" << totalPurchase << endl;
	cout << "Change = $" << change << "\n" << endl;
	return 0;
}