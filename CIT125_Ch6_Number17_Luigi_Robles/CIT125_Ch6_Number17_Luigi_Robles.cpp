// CIT125_Ch6_Number17_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch6 Pg.193 Number 17
// 6-29-2020 Summer Term

#include <iostream> //preprocessing directive
#include <iomanip> //directive to use setprecision manipulator
using namespace std;

int main()
{
	//declare and initialize variables
	int currencyType = 0;
	double currencyAmount = 0.0;
	double exchangedAmount = 0.0;

	//input part of IPO
	cout << "Please select the Currency ID you are converting to:" << endl
		<< "Canadian Dollar = 1 ,Euro = 2,Indian Rupee = 3," << endl
		<< "Japanese Yen = 4,Mexican Peso = 5, South African Rand = 6" << endl
		<< "or British Pound (Pound Sterling) = 7 " << endl;
	cin >> currencyType; //input for currency Type to convert to
	
    //input for currency Amount, must be positive integer
    cout << "Please enter the amount of U.S. Dollars to exchange: ";
	cin >> currencyAmount; //input for U.S. Currency amount

    //checking if currencyAmount is positive value
    if (currencyAmount < 0)
        cout << "Exchange amount must be a positive value, Please enter a different amount.";
    else
	    switch (currencyType) //switch statement
	{
	case 1:
		exchangedAmount = currencyAmount * 1.359;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " CAD";
		break;
	case 2:
		exchangedAmount = currencyAmount * 0.891;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " EUR";
		break;
	case 3:
		exchangedAmount = currencyAmount * 75.575;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " INR";
		break;
	case 4:
		exchangedAmount = currencyAmount * 107.641;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " JPY";
		break;
	case 5:
		exchangedAmount = currencyAmount * 23.056;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " MXN";
		break;
	case 6:
		exchangedAmount = currencyAmount * 17.372;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " ZAR";
			break;
	case 7:
		exchangedAmount = currencyAmount * 1.236;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " GBP";
			break;
	default:
		cout << "Invalid currency ID, Please select an ID from the menu 1 - 7";
    } //end switch
} //end main function    
