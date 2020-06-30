// CIT125_Ch6_Number17_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch6 Pg.193 Number 17
// 6-29-2020 Summer Term

#include <iostream> // preprocessing directive
#include <iomanip>
using namespace std;

int main()
{
	//declare and initialize variables
	int currencyType = 0;
	double currencyAmount = 0.0;
	double exchangedAmount = 0.0;

	//input part of IPO
	cout << "Please select the Currency type you are converting to:" << endl
		<< "Canadian Dollar = 1 ,Euro = 2,Indian Rupee = 3," << endl
		<< "Japanese Yen = 4,Mexican Peso = 5, South African Rand = 6 or British Pound = 7 " << endl;
	cin >> currencyType;
	cout << "Please enter the amount of curreny to exchange: ";
	cin >> currencyAmount;

	switch (currencyType)
	{
	case 1:
		exchangedAmount = currencyAmount / .73014;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " CAD";
		break;
	case 2:
		exchangedAmount = currencyAmount / 1.1205059;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " EUR";
		break;
	case 3:
		exchangedAmount = currencyAmount / 0.013230243;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " INR";
		break;
	case 4:
		exchangedAmount = currencyAmount / 0.0092779;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " JPY";
		break;
	case 5:
		exchangedAmount = currencyAmount / 0.04314454;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << "MXN";
		break;
	case 6:
		exchangedAmount = currencyAmount / 0.05764486153;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " ZAR";
			break;
	case 7:
		exchangedAmount = currencyAmount / 0.05768775;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " GBP";
			break;


	}
	return 0;
}	//end of main function




