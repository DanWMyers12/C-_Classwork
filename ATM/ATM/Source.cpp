//Midterm
#include <iostream>
using namespace std;

//Declare Functions
int menu();
double fill(double,double);
double draw(double,double);
double valid();
void display(double);

//Main
int main()
{
	double balance = 1000;
	int select,count = 0;

	
	do
	{
		select = menu();
		switch (select)
		{
		case 1:
			cout << "\n\n\t\tDeposit";
			balance = fill(balance, valid());
			break;
		case 2:
			cout << "\n\n\t\tWithdraw";
			balance = draw(balance, valid());
			break;
		case 3:
			display(balance);
			break;
		case 4:
			cout << "\n\n Have a great day!";
			break;
		default:
			cout << "Invalid Selection; Try again...\n\n";
			break;
		}
		if (count < 2)
			count++;
		else
		{
			cout << endl << endl;
			system("pause");
			system("cls");
			count = 0;
		}
	} while (select != 4);
	



	// Pause for review
	cout << endl << endl;
	system("pause");
	return 0;
}

//Define Functions
int menu()
{
	int select;
	do
	{
		cout << "\n\t\t\tBANK\n\t1. Make a Deposit\n\t2. Make a Withdrawal\n\t3. Display Balance\n\t4. Exit\n  Enter your choice HERE = >";
		cin >> select;
	} while ((select < 1 || select > 4));
	return select;
}

double fill(double balance, double d_amt)
{
	balance += d_amt;
	return balance;
}

double draw(double balance, double w_amt)
{
	if (w_amt > balance)
		cout << "\n Unable to process transaction due to insufficent funds.\n Returning to main menu...\n"; 
	else
		balance -= w_amt;
	return balance;
}

double valid()
{
	double amt;
	do
	{
		cout << "\n\n Please enter an amount:  ";
		cin >> amt;
		if (amt < 0)
			cout << "\n Input too low. Please enter a positive number...";
	} while (amt < 0);
	return amt;
}

void display(double balance)
{
	cout << "\n\n Your account balance is:  $" << balance << endl;
}