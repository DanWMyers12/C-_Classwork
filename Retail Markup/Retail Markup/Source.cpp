#include <iostream>
using namespace std;

const float FAST = 1.05, SLOW = 1.1;
const int STKTIME = 7;

void input(double&, int&);
double markup(double, int);
void display(double,double,int);


int main()
{
	double whole, retail;
	int days;

	input(whole, days);
	retail = markup(whole, days);
	display(retail, whole, days);

	cout << "\n\n";
	system("pause");
	return 0;
}

void input(double& whole, int& days)
{
	cout << " Enter whole sale price: $ ";
	cin >> whole;
	cout << " Enter expected number of days until sold: ";
	cin >> days;
	return;
}

double markup(double whole, int days)
{
	if (days > STKTIME)
		return whole*SLOW;
	else
		return whole*FAST;
}
void display(double retail, double whole, int days)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "\n The whole sale cost is $"<< whole <<"\n The expected time until sale is "<< days <<" days\n The retail price of the item is:  $ " << retail;
	return;
}