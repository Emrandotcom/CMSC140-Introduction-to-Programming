/*
* Class: CMSC140
* Program : Project 3
* Instructor : Najmeh Abedzadeh
* Description :
* Due : 04 / 04 / 2021
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here : Emran Abbamacha
*/

#include <iomanip>
using std::setw;
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using namespace std;

string hotelLocation;
int hotelFloors;
const int floorMin = 1, floorMax = 5, roomMin = 1, roomMax = 30;
int floor1Rooms, floor2Rooms, floor3Rooms, floor4Rooms, floor5Rooms; //Floors 1-5
int singleFloor1, doubleFloor1, kingFloor1, suiteFloor1;			 //Rooms for the first floor
int singleFloor2, doubleFloor2, kingFloor2, suiteFloor2;		 	 //Rooms for the second floor
int singleFloor3, doubleFloor3, kingFloor3, suiteFloor3;			 //Rooms for the third floor
int singleFloor4, doubleFloor4, kingFloor4, suiteFloor4;			 //Rooms for the fourth floor
int singleFloor5, doubleFloor5, kingFloor5, suiteFloor5;			 //Rooms for the fifth floor

int main()
{
	// INTRO

	cout << "===============================================================" << endl;
	cout << "\t\tBlueMont Hotel" << endl;
	cout << "===============================================================" << endl;

	cout << "Enter the location of this hotel chain:  ";
	getline(cin, hotelLocation);

	cout << "Enter total number of floors of the hotel:  ";
	cin >> hotelFloors;


	while (hotelFloors < floorMin || hotelFloors > floorMax) {                                      // loops if floors is less than 1 or greater then 5
		cout << "\nNumber of floors should be between 1 and 5!! Please try again." << endl;
		cout << "Enter total number of floors of the hotel:  ";
		cin >> hotelFloors;
	}

	// ROOM INQUIRY

	if (hotelFloors == 1) {			// if user selected floor 1

		cout << "\nEnter total number of rooms on the first floor:  ";
		cin >> floor1Rooms;

		while (floor1Rooms < roomMin || floor1Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the first floor:  ";
			cin >> floor1Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the first floor:  ";
		cin >> singleFloor1;
		cout << "How many DOUBLE rooms are occupied on the first floor:  ";
		cin >> doubleFloor1;
		cout << "How many KING rooms are occupied on the first floor:  ";
		cin >> kingFloor1;
		cout << "How many SUITE rooms are occupied on the first floor:  ";
		cin >> suiteFloor1;
	
		while ((singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) > floor1Rooms || (singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) < 1){		    // loops if occupied rooms is greater than total number of rooms on floor 1
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;
			
			cout << "How many SINGLE rooms are occupied on the first floor:  ";
			cin >> singleFloor1;
			cout << "How many DOUBLE rooms are occupied on the first floor:  ";
			cin >> doubleFloor1;
			cout << "How many KING rooms are occupied on the first floor:  ";
			cin >> kingFloor1;
			cout << "How many SUITE rooms are occupied on the first floor:  ";
			cin >> suiteFloor1;
		}
	} 
	
	if (hotelFloors == 2) {			// if user selected floor 2

		//Floor 1
		cout << "\nEnter total number of rooms on the first floor:  ";
		cin >> floor1Rooms;

		while (floor1Rooms < roomMin || floor1Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the first floor:  ";
			cin >> floor1Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the first floor:  ";
		cin >> singleFloor1;
		cout << "How many DOUBLE rooms are occupied on the first floor:  ";
		cin >> doubleFloor1;
		cout << "How many KING rooms are occupied on the first floor:  ";
		cin >> kingFloor1;
		cout << "How many SUITE rooms are occupied on the first floor:  ";
		cin >> suiteFloor1;

		while ((singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) > floor1Rooms || (singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 1
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the first floor:  ";
			cin >> singleFloor1;
			cout << "How many DOUBLE rooms are occupied on the first floor:  ";
			cin >> doubleFloor1;
			cout << "How many KING rooms are occupied on the first floor:  ";
			cin >> kingFloor1;
			cout << "How many SUITE rooms are occupied on the first floor:  ";
			cin >> suiteFloor1;
		}

		//Floor 2
		cout << "\nEnter total number of rooms on the second floor:  ";
		cin >> floor2Rooms;

		while (floor2Rooms < roomMin || floor2Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the second floor:  ";
			cin >> floor2Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the second floor:  ";
		cin >> singleFloor2;
		cout << "How many DOUBLE rooms are occupied on the second floor:  ";
		cin >> doubleFloor2;
		cout << "How many KING rooms are occupied on the second floor:  ";
		cin >> kingFloor2;
		cout << "How many SUITE rooms are occupied on the second floor:  ";
		cin >> suiteFloor2;

		while ((singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) > floor2Rooms || (singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 2
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the second floor:  ";
			cin >> singleFloor2;
			cout << "How many DOUBLE rooms are occupied on the second floor:  ";
			cin >> doubleFloor2;
			cout << "How many KING rooms are occupied on the second floor:  ";
			cin >> kingFloor2;
			cout << "How many SUITE rooms are occupied on the second floor:  ";
			cin >> suiteFloor2;
		}
	} 
	
	if (hotelFloors == 3) {         // if user selected floor 3

		//Floor 1
		cout << "\nEnter total number of rooms on the first floor:  ";
		cin >> floor1Rooms;

		while (floor1Rooms < roomMin || floor1Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the first floor:  ";
			cin >> floor1Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the first floor:  ";
		cin >> singleFloor1;
		cout << "How many DOUBLE rooms are occupied on the first floor:  ";
		cin >> doubleFloor1;
		cout << "How many KING rooms are occupied on the first floor:  ";
		cin >> kingFloor1;
		cout << "How many SUITE rooms are occupied on the first floor:  ";
		cin >> suiteFloor1;

		while ((singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) > floor1Rooms || (singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 1
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the first floor:  ";
			cin >> singleFloor1;
			cout << "How many DOUBLE rooms are occupied on the first floor:  ";
			cin >> doubleFloor1;
			cout << "How many KING rooms are occupied on the first floor:  ";
			cin >> kingFloor1;
			cout << "How many SUITE rooms are occupied on the first floor:  ";
			cin >> suiteFloor1;
		}

		//Floor 2
		cout << "\nEnter total number of rooms on the second floor:  ";
		cin >> floor2Rooms;

		while (floor2Rooms < roomMin || floor2Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the second floor:  ";
			cin >> floor2Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the second floor:  ";
		cin >> singleFloor2;
		cout << "How many DOUBLE rooms are occupied on the second floor:  ";
		cin >> doubleFloor2;
		cout << "How many KING rooms are occupied on the second floor:  ";
		cin >> kingFloor2;
		cout << "How many SUITE rooms are occupied on the second floor:  ";
		cin >> suiteFloor2;

		while ((singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) > floor2Rooms || (singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 2
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the second floor:  ";
			cin >> singleFloor2;
			cout << "How many DOUBLE rooms are occupied on the second floor:  ";
			cin >> doubleFloor2;
			cout << "How many KING rooms are occupied on the second floor:  ";
			cin >> kingFloor2;
			cout << "How many SUITE rooms are occupied on the second floor:  ";
			cin >> suiteFloor2;
		}

		//Floor 3
		cout << "\nEnter total number of rooms on the third floor:  ";
		cin >> floor3Rooms;

		while (floor3Rooms < roomMin || floor3Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the third floor:  ";
			cin >> floor3Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the third floor:  ";
		cin >> singleFloor3;
		cout << "How many DOUBLE rooms are occupied on the third floor:  ";
		cin >> doubleFloor3;
		cout << "How many KING rooms are occupied on the third floor:  ";
		cin >> kingFloor3;
		cout << "How many SUITE rooms are occupied on the third floor:  ";
		cin >> suiteFloor3;

		while ((singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) > floor3Rooms || (singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 3
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the third floor:  ";
			cin >> singleFloor3;
			cout << "How many DOUBLE rooms are occupied on the third floor:  ";
			cin >> doubleFloor3;
			cout << "How many KING rooms are occupied on the third floor:  ";
			cin >> kingFloor3;
			cout << "How many SUITE rooms are occupied on the third floor:  ";
			cin >> suiteFloor3;
		}
	} 
	
	if (hotelFloors == 4) {		// if user selected floor 4
		//Floor 1
		cout << "\nEnter total number of rooms on the first floor:  ";
		cin >> floor1Rooms;

		while (floor1Rooms < roomMin || floor1Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the first floor:  ";
			cin >> floor1Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the first floor:  ";
		cin >> singleFloor1;
		cout << "How many DOUBLE rooms are occupied on the first floor:  ";
		cin >> doubleFloor1;
		cout << "How many KING rooms are occupied on the first floor:  ";
		cin >> kingFloor1;
		cout << "How many SUITE rooms are occupied on the first floor:  ";
		cin >> suiteFloor1;

		while ((singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) > floor1Rooms || (singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 1
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the first floor:  ";
			cin >> singleFloor1;
			cout << "How many DOUBLE rooms are occupied on the first floor:  ";
			cin >> doubleFloor1;
			cout << "How many KING rooms are occupied on the first floor:  ";
			cin >> kingFloor1;
			cout << "How many SUITE rooms are occupied on the first floor:  ";
			cin >> suiteFloor1;
		}

		//Floor 2
		cout << "\nEnter total number of rooms on the second floor:  ";
		cin >> floor2Rooms;

		while (floor2Rooms < roomMin || floor2Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the second floor:  ";
			cin >> floor2Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the second floor:  ";
		cin >> singleFloor2;
		cout << "How many DOUBLE rooms are occupied on the second floor:  ";
		cin >> doubleFloor2;
		cout << "How many KING rooms are occupied on the second floor:  ";
		cin >> kingFloor2;
		cout << "How many SUITE rooms are occupied on the second floor:  ";
		cin >> suiteFloor2;

		while ((singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) > floor2Rooms || (singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 2
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the second floor:  ";
			cin >> singleFloor2;
			cout << "How many DOUBLE rooms are occupied on the second floor:  ";
			cin >> doubleFloor2;
			cout << "How many KING rooms are occupied on the second floor:  ";
			cin >> kingFloor2;
			cout << "How many SUITE rooms are occupied on the second floor:  ";
			cin >> suiteFloor2;
		}

		//Floor 3
		cout << "\nEnter total number of rooms on the third floor:  ";
		cin >> floor3Rooms;

		while (floor3Rooms < roomMin || floor3Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the third floor:  ";
			cin >> floor3Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the third floor:  ";
		cin >> singleFloor3;
		cout << "How many DOUBLE rooms are occupied on the third floor:  ";
		cin >> doubleFloor3;
		cout << "How many KING rooms are occupied on the third floor:  ";
		cin >> kingFloor3;
		cout << "How many SUITE rooms are occupied on the third floor:  ";
		cin >> suiteFloor3;

		while ((singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) > floor3Rooms || (singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 3
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the third floor:  ";
			cin >> singleFloor3;
			cout << "How many DOUBLE rooms are occupied on the third floor:  ";
			cin >> doubleFloor3;
			cout << "How many KING rooms are occupied on the third floor:  ";
			cin >> kingFloor3;
			cout << "How many SUITE rooms are occupied on the third floor:  ";
			cin >> suiteFloor3;
		}

		//Floor 4
		cout << "\nEnter total number of rooms on the fourth floor:  ";
		cin >> floor4Rooms;

		while (floor4Rooms < roomMin || floor4Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the fourth floor:  ";
			cin >> floor4Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the fourth floor:  ";
		cin >> singleFloor4;
		cout << "How many DOUBLE rooms are occupied on the fourth floor:  ";
		cin >> doubleFloor4;
		cout << "How many KING rooms are occupied on the fourth floor:  ";
		cin >> kingFloor4;
		cout << "How many SUITE rooms are occupied on the fourth floor:  ";
		cin >> suiteFloor4;

		while ((singleFloor4 + doubleFloor4 + kingFloor4 + suiteFloor4) > floor4Rooms || (singleFloor4 + doubleFloor4 + kingFloor4 + suiteFloor4) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 4
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the fourth floor:  ";
			cin >> singleFloor4;
			cout << "How many DOUBLE rooms are occupied on the fourth floor:  ";
			cin >> doubleFloor4;
			cout << "How many KING rooms are occupied on the fourth floor:  ";
			cin >> kingFloor4;
			cout << "How many SUITE rooms are occupied on the fourth floor:  ";
			cin >> suiteFloor4;
		}
	} 

	if (hotelFloors == 5) {         // if user selected floor 5
		//Floor 1
		cout << "\nEnter total number of rooms on the first floor:  ";
		cin >> floor1Rooms;

		while (floor1Rooms < roomMin || floor1Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the first floor:  ";
			cin >> floor1Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the first floor:  ";
		cin >> singleFloor1;
		cout << "How many DOUBLE rooms are occupied on the first floor:  ";
		cin >> doubleFloor1;
		cout << "How many KING rooms are occupied on the first floor:  ";
		cin >> kingFloor1;
		cout << "How many SUITE rooms are occupied on the first floor:  ";
		cin >> suiteFloor1;

		while ((singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) > floor1Rooms || (singleFloor1 + doubleFloor1 + kingFloor1 + suiteFloor1) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 1
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the first floor:  ";
			cin >> singleFloor1;
			cout << "How many DOUBLE rooms are occupied on the first floor:  ";
			cin >> doubleFloor1;
			cout << "How many KING rooms are occupied on the first floor:  ";
			cin >> kingFloor1;
			cout << "How many SUITE rooms are occupied on the first floor:  ";
			cin >> suiteFloor1;
		}

		//Floor 2
		cout << "\nEnter total number of rooms on the second floor:  ";
		cin >> floor2Rooms;

		while (floor2Rooms < roomMin || floor2Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the second floor:  ";
			cin >> floor2Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the second floor:  ";
		cin >> singleFloor2;
		cout << "How many DOUBLE rooms are occupied on the second floor:  ";
		cin >> doubleFloor2;
		cout << "How many KING rooms are occupied on the second floor:  ";
		cin >> kingFloor2;
		cout << "How many SUITE rooms are occupied on the second floor:  ";
		cin >> suiteFloor2;

		while ((singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) > floor2Rooms || (singleFloor2 + doubleFloor2 + kingFloor2 + suiteFloor2) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 2
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the second floor:  ";
			cin >> singleFloor2;
			cout << "How many DOUBLE rooms are occupied on the second floor:  ";
			cin >> doubleFloor2;
			cout << "How many KING rooms are occupied on the second floor:  ";
			cin >> kingFloor2;
			cout << "How many SUITE rooms are occupied on the second floor:  ";
			cin >> suiteFloor2;
		}

		//Floor 3
		cout << "\nEnter total number of rooms on the third floor:  ";
		cin >> floor3Rooms;

		while (floor3Rooms < roomMin || floor3Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the third floor:  ";
			cin >> floor3Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the third floor:  ";
		cin >> singleFloor3;
		cout << "How many DOUBLE rooms are occupied on the third floor:  ";
		cin >> doubleFloor3;
		cout << "How many KING rooms are occupied on the third floor:  ";
		cin >> kingFloor3;
		cout << "How many SUITE rooms are occupied on the third floor:  ";
		cin >> suiteFloor3;

		while ((singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) > floor3Rooms || (singleFloor3 + doubleFloor3 + kingFloor3 + suiteFloor3) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 3
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the third floor:  ";
			cin >> singleFloor3;
			cout << "How many DOUBLE rooms are occupied on the third floor:  ";
			cin >> doubleFloor3;
			cout << "How many KING rooms are occupied on the third floor:  ";
			cin >> kingFloor3;
			cout << "How many SUITE rooms are occupied on the third floor:  ";
			cin >> suiteFloor3;
		}

		//Floor 4
		cout << "\nEnter total number of rooms on the fourth floor:  ";
		cin >> floor4Rooms;

		while (floor4Rooms < roomMin || floor4Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the fourth floor:  ";
			cin >> floor4Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the fourth floor:  ";
		cin >> singleFloor4;
		cout << "How many DOUBLE rooms are occupied on the fourth floor:  ";
		cin >> doubleFloor4;
		cout << "How many KING rooms are occupied on the fourth floor:  ";
		cin >> kingFloor4;
		cout << "How many SUITE rooms are occupied on the fourth floor:  ";
		cin >> suiteFloor4;

		while ((singleFloor4 + doubleFloor4 + kingFloor4 + suiteFloor4) > floor4Rooms || (singleFloor4 + doubleFloor4 + kingFloor4 + suiteFloor4) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 4
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the fourth floor:  ";
			cin >> singleFloor4;
			cout << "How many DOUBLE rooms are occupied on the fourth floor:  ";
			cin >> doubleFloor4;
			cout << "How many KING rooms are occupied on the fourth floor:  ";
			cin >> kingFloor4;
			cout << "How many SUITE rooms are occupied on the fourth floor:  ";
			cin >> suiteFloor4;
		}

		//Floor 5
		cout << "\nEnter total number of rooms on the fifth floor:  ";
		cin >> floor5Rooms;

		while (floor5Rooms < roomMin || floor5Rooms > roomMax) {																							    // loops if rooms is less than 1 or greater then 30
			cout << "\nNumber of rooms should be between 1 and 30!! Please try again." << endl;
			cout << "Enter total number of rooms on the fifth floor:  ";
			cin >> floor5Rooms;
		}
		cout << "How many SINGLE rooms are occupied on the fifth floor:  ";
		cin >> singleFloor5;
		cout << "How many DOUBLE rooms are occupied on the fifth floor:  ";
		cin >> doubleFloor5;
		cout << "How many KING rooms are occupied on the fifth floor:  ";
		cin >> kingFloor5;
		cout << "How many SUITE rooms are occupied on the fifth floor:  ";
		cin >> suiteFloor5;

		while ((singleFloor5 + doubleFloor5 + kingFloor5 + suiteFloor5) > floor5Rooms || (singleFloor5 + doubleFloor5 + kingFloor5 + suiteFloor5) < 1) {		// loops if occupied rooms is greater than total number of rooms on floor 5
			cout << "\nTotal number of occupied rooms exceeds the total number of rooms on ths floor. Please try again!!" << endl;

			cout << "How many SINGLE rooms are occupied on the fifth floor:  ";
			cin >> singleFloor5;
			cout << "How many DOUBLE rooms are occupied on the fifth floor:  ";
			cin >> doubleFloor5;
			cout << "How many KING rooms are occupied on the fifth floor:  ";
			cin >> kingFloor5;
			cout << "How many SUITE rooms are occupied on the fifth floor:  ";
			cin >> suiteFloor5;
		}
	}

	cout << "\n===================================================================================================" << endl;
	cout << "\t\t\t\tBlueMont Hotel located in " << hotelLocation << endl;
	cout << "TODAY'S ROOM RATES (US$/night)" << endl;
	cout << "\tSingle Room" << "\tDouble Room" << "\tKing Room" << "\tSuite Room" << endl;
	cout << setw(19) << "60";
	cout << setw(16) << "75";
	cout << setw(14) << "100";
	cout << setw(17) << "150";
	cout << "\n===================================================================================================" << endl;

	// CALCULATIONS

	int hotelIncome, totalRooms, occupiedRooms, unoccupiedRooms, occupancyRate;

	hotelIncome = 60 * (singleFloor1 + singleFloor2 + singleFloor3 + singleFloor4 + singleFloor5) + 75 * (doubleFloor1 + doubleFloor2 + doubleFloor3 + doubleFloor4 + doubleFloor5) + 100 * (kingFloor1 + kingFloor2 + kingFloor3 + kingFloor4 + kingFloor5) + 150 * (suiteFloor1 + suiteFloor2 + suiteFloor3 + suiteFloor4 + suiteFloor5);

	totalRooms = (floor1Rooms + floor2Rooms + floor3Rooms + floor4Rooms + floor5Rooms);

	occupiedRooms = (singleFloor1 + singleFloor2 + singleFloor3 + singleFloor4 + singleFloor5) + (doubleFloor1 + doubleFloor2 + doubleFloor3 + doubleFloor4 + doubleFloor5) + (kingFloor1 + kingFloor2 + kingFloor3 + kingFloor4 + kingFloor5) + (suiteFloor1 + suiteFloor2 + suiteFloor3 + suiteFloor4 + suiteFloor5);

	unoccupiedRooms = totalRooms - occupiedRooms;

	occupancyRate = ((float)occupiedRooms / (float)totalRooms) * 100;
	
	cout << setw(30) << "Hotel Income: " << setw(10) << "$" << hotelIncome << endl;
	cout << setw(30) << "Total # of Rooms: " << setw(14) << totalRooms << endl;
	cout << setw(30) << "Total # of Occupied Rooms: " << setw(14) << occupiedRooms << endl;
	cout << setw(30) << "Total # of Unoccupied Rooms: " << setw(14) << unoccupiedRooms << endl;
	cout << setw(30) << "Occupancy Rate: " << setw(13) << fixed << setprecision(2) << occupancyRate << "%"<< endl;
	if (occupancyRate < 60) {
		cout << "Message to improve the occupancy rate: Hire more staff!!" << endl;
	}
	cin.ignore();



	// LEAST ROOMS
	
	if ((floor1Rooms < floor2Rooms) && (floor1Rooms < floor3Rooms) && (floor1Rooms < floor4Rooms) && (floor1Rooms < floor5Rooms)){
		cout << "Floor 1 with " << floor1Rooms << " rooms has the least number of rooms" << endl;
	}
	if ((floor2Rooms < floor1Rooms) && (floor2Rooms < floor3Rooms) && (floor2Rooms < floor4Rooms) && (floor2Rooms < floor5Rooms)){
		cout << "Floor 2 with " << floor2Rooms << " rooms has the least number of rooms" << endl;
	} 
	if ((floor3Rooms < floor1Rooms) && (floor3Rooms < floor2Rooms) && (floor3Rooms < floor4Rooms) && (floor3Rooms < floor5Rooms)){
		cout << "Floor 3 with " << floor3Rooms << " rooms has the least number of rooms" << endl;
	} 
	if ((floor4Rooms < floor1Rooms) && (floor4Rooms < floor2Rooms) && (floor4Rooms < floor3Rooms) && (floor4Rooms < floor5Rooms)){
		cout << "Floor 4 with " << floor4Rooms << " rooms has the least number of rooms" << endl;
	} 
	if ((floor5Rooms < floor1Rooms) && (floor5Rooms < floor2Rooms) && (floor5Rooms < floor3Rooms) && (floor5Rooms < floor4Rooms)){
		cout << "Floor 5 with " << floor5Rooms << " rooms has the least number of rooms" << endl;
	}

	//ENDING

	const string programmerName = "Emran Abbamacha", assignmentName = "CMSC140 Hotel Income Calculator", dueDate = "04 / 04 / 21";
	cout << "\n\nThank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " + programmerName << endl;
	cout << assignmentName << endl;
	cout << "Due Date: " + dueDate << endl;
	
	return 0;
}