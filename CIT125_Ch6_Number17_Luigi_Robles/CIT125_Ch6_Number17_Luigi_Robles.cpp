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
		exchangedAmount = currencyAmount / .7299;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " CAD";
		break;
	case 2:
		exchangedAmount = currencyAmount / 1.1219;
		cout << fixed << setprecision(2);
		cout << "Your Exchanged amount is: " << exchangedAmount << " EUR";
		break;
	}
	return 0;
}	//end of main function




