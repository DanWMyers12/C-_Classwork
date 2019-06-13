#include <iostream>
#include <string>
using namespace std;
/*Guidance
Write a C++ program to do the following
 Enter the following information for 5 Employees:
	o First name
	o Last name
	o Id
	o Address
	o Number of children, for each child enter the following :
		a.name
		b.age
		c.gender
 Calculate the monthly salary based on the following entered code :
	1. Manger
		Salary is 50000
	2. Hourly worker
		Based on entered hours and rate
		If hours <= 40 salary = house*rate
		Else salary = 40 * hour rate + (hours - 40)*hour rate*1.5
	3. Commission worker
		Based on the entered sale and sale rate = 5.7%:
		Salary = sale * sale rate + 250
	4. Piece worker
		Based on entered number of products and rate
		Salary = rate*number of products
 Display employee’s salary
*/
int main()
{
	//Main Variables
	
	int num_employ = 5;

	for (int a = 1; a <= num_employ; a++)
	{
		//Loop variables
		string fname, lname, address,id;
		const double srate = .057;
		int num_kid, menu, nsales;
		double salary, rate, hours, sales, msalary=50000;

		//Loop code
		cout << "Employee " << a << endl << endl;
		cout << "Please enter First name:  ";
		cin >> fname;
		cout << "Please enter Last name:  ";
		cin >> lname;
		cout << "Please enter Employee ID:  ";
		cin >> id;
		cout << "Please enter Address:  ";
		cin.ignore();
		getline(cin,address);
		cout << "Please Enter Number of Children in the household:  ";
		cin >> num_kid;
		for (int b = 1; b <= num_kid; b++)
		{
			//Loop variables 2
			string c_name;
			int c_age;
			char c_gender;

			//loop code 2
			cout << "Child " << b << endl;
			cout << "Please enter Child " << b << " First name:  ";
			cin >> c_name;
			cout << "Please enter Child " << b << " Age:  ";
			cin >> c_age;
			cout << "Please enter Child " << b << " gender[M/F]:  ";
			cin >> c_gender;
			cout << endl;
		}//for child
		cout << "Please select Salary Option:\n1. Manager\t2. Hourly\n3. Commision\t4. Peice Work\n\n Your Selection:  ";
		cin >> menu;
		do
		{

			switch (menu)
			{
			case 1:
				salary = msalary;
				break;
			case 2:
				cout << "Pleae input Hours worked:  ";
				cin >> hours;
				cout << "Please enter your Hourly Rate:  ";
				cin >> rate;
				if (hours > 40)
					salary = (40.0*rate) + (1.5*(hours - 40)*rate);
				else
					salary = hours*rate;
				break;
			case 3:
				cout << "Please Enter your Total Sales:  ";
				cin >> sales;
				salary = (sales * srate) + 250;
				break;
			case 4:
				cout << "Please Number of Products sold:  ";
				cin >> nsales;
				cout << "Please enter your Product Rate:  ";
				cin >> rate;
				salary = nsales*rate;
				break;
			default:
				break;
			}

		} while (menu > 4 || menu < 0);//dowhile salary
		
		
		//display
		cout << "The Salary for " << fname << " " << lname << " is :  " << salary << endl <<endl;
	}//for employee
	

	system("pause");
	return 0;
}





















