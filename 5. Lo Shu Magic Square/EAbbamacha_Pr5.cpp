/*
* Class: CMSC140
* Program : Project 5
* Instructor : Najmeh Abedzadeh
* Description : Write a program that simulates a magic square using 3 one dimensional parallel arrays of integer type. 
* Due : 05 / 02 / 2021
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

// Global constants 
const int ROWS = 3;   // The number of rows in the array
const int COLS = 3;   // The number of columns in the array
const int MIN = 1;    // The value of the smallest number
const int MAX = 9;    // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void ending();

int main(){

    int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
    char repeat = 'y';

    do {
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS)){
            cout << "This is a Lo Shu magic square." << endl;
        }

        else
        cout << "This is not a Lo Shu magic square." << endl;

        cout << "\n\nDo you want to try again? (Y/N) ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    ending();
    return 0;
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){

    int rowNumber = 0;
    for (int i = 0; i < size; i++){
        cout << "Enter the number for row " << rowNumber << " and for column " << i << " : ";
        cin >> arrayRow1[i];
    }
    rowNumber++;

    for (int i = 0; i < size; i++){
        cout << "Enter the number for row " << rowNumber << " and for column " << i << " : ";
        cin >> arrayRow2[i];
    }
    rowNumber++;

    for (int i = 0; i < size; i++){
        cout << "Enter the number for row " << rowNumber << " and for column " << i << " : ";
        cin >> arrayRow3[i];
    }
}

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){

    int rowNum = 0;
    for (int i = 0; i < size; i++){
        cout << arrayrow1[i] << " ";
    }
    cout << endl;
    rowNum++;

    for (int i = 0; i < size; i++){
        cout << arrayrow2[i] << " ";
    }
    cout << endl;
    rowNum++;

    for (int i = 0; i < size; i++){
        cout << arrayrow3[i] << " ";
    }
    cout << endl;
}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max){

    for (int i = 0; i < COLS; i++){
        if (arrayRow1[i] < min || arrayRow1[i] > max){
            return false;
        }

        else if (arrayRow2[i] < min || arrayRow2[i] > max){
            return false;
        }

        else if (arrayRow3[i] < min || arrayRow3[i] > max){
            return false;
        }
    }
    return true;
}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){

    int i = 0, j = 0, k = 0;

    while (i < (sizeof(arrayRow1) / sizeof(arrayRow1[0])) && j < (sizeof(arrayRow2) / sizeof(arrayRow2[0])) && k < (sizeof(arrayRow3) / sizeof(arrayRow3[0]))){

        if ((arrayRow1[i] == arrayRow2[j]) && (arrayRow2[j] == arrayRow3[k])){
            if (i > 1){
                return false;
            }

            i++;
            j++;
            k++;
        }

        else if (arrayRow1[i] < arrayRow2[j])
            i++;
        else if (arrayRow2[j] < arrayRow3[k])
            j++;
        else
            k++;
    }
    return true;
}

bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){

    int sumRow1 = arrayrow1[0] + arrayrow1[1] + arrayrow1[2];
    int sumRow2 = arrayrow2[0] + arrayrow2[1] + arrayrow2[2];
    int sumRow3 = arrayrow3[0] + arrayrow3[1] + arrayrow3[2];

    if ((sumRow1 != sumRow2) || (sumRow1 != sumRow3) || (sumRow2 != sumRow3)){
        return false;
    }
    return true;
}

bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){

    bool status = true;
    int sumCol1 = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];
    int sumCol2 = arrayrow1[1] + arrayrow2[1] + arrayrow3[1];

    int sumCol3 = arrayrow1[2] + arrayrow2[2] + arrayrow3[2];

    if ((sumCol1 != sumCol2) ||
        (sumCol1 != sumCol3) ||
        (sumCol2 != sumCol3))
    {
        status = false;
    }
    return status;

}


bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){

    int sumDiag1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];

    int sumDiag2 = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];

    if (sumDiag1 != sumDiag2){
        return false;
    }
    return true;
}

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){

    bool isInRange = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX);
    bool isUnique = checkUnique(arrayRow1, arrayRow2, arrayRow3, size);
    bool isRowEqual = checkRowSum(arrayRow1, arrayRow2, arrayRow3, size);
    bool isColEqual = checkColSum(arrayRow1, arrayRow2, arrayRow3, size);
    bool isDiagEqual = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);

    if (isInRange && isUnique && isRowEqual && isColEqual && isDiagEqual){
        return true;
    }
    return false;
}

void ending() {

	const string programmerName = "Emran Abbamacha", assignmentName = "CMSC140 Lo Shu Magic Square", dueDate = "05 / 02 / 21";
	cout << "\n\nThank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " + programmerName << endl;
	cout << assignmentName << endl;
	cout << "Due Date: " + dueDate << endl;
}
