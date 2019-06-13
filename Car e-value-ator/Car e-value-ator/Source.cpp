#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Declare variables
	string model;
	int year, budget = 1500;
	float discount = .8;
	double price, d_price;
	char damaged;

	//Input info
	cout << "\t\t\t\CAR REPAIR SHOP\n\t\tEnter Car Information\n";
	cout << "Enter Car Model:  ";
	getline(cin, model);
	cout << "\nEnter Car Year:  ";
	cin >> year;
	cout << "\nEnter Car Price:  ";
	cin >> price;
	cout << "\nHad an Accident(y:Yes n: No)?  ";
	cin >> damaged;

	//Calculate and decision
	d_price = discount*price;
	
	cout << "\n*************************************\n\t\t20% Discount Price\n";
	cout << "Price after discount is:  " << d_price<<endl;
	if ((damaged == 'n') && (d_price < budget))
		cout << "Decision: Good Deal\n";
	else
		cout << "Decision: Expensive\n";
	cout << "*************************************\n";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "\t\t\t\tCar Information\n\t\tModel: " << model << "\n\t\tYear: " << year << "\n\t\tPrice after Discount: " << d_price << "\n\t\tHad and accident? " << damaged << endl << endl;
	system("pause");
	return 0;
}

/*
1. Enter the following car information
• Model
• Year
• Price
• Had an accident(Y:Yes N : No) ?
2. Find the car price after 20 % discount
3. If the price less than or equal 1500 and the car has no accident display
“Decision : Good Deal” else display “Decision : Expensive”.
	4. Display the car information as shown in figure below.
	*/