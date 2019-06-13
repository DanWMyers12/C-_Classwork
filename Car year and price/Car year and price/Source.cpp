#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
	int year;
	double price;

	//get model year
	cout << "Please enter vehicle year:  ";
	cin >> year;
	cout << endl;
	//get car price
	cout << "Please enter vehicle price:  ";
	cin >> price;
	cout << endl;


	//display Car's year and price and pause for review
	cout << "--------------------------------------\n|   Year                      Price  |\n|                                    |\n|                                    |\n|   " << year << "----------------------" << price << "|\n--------------------------------------";
	system("pause");
	return 0;
}