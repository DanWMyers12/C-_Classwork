#include <iostream>
using namespace std;
/*Write read_two_numbers function which passes two integer numbers form the keyboard,

2. Write sort function which passes the two entered numbers and sort them in an ascending order,

3. Write a swap function which passes in two integer numbers and swap them,

4. Write a display function which passes in two integer numbers and print them.*/

//Global Var

//function Declare
void read(int&, int&);
void sort(int&, int&);
void swap(int&, int&);
void display(int, int);

int main()
{
	int a=0, b=0;


	read(a, b);
	sort(a, b);
	display(a, b);

	cout << endl << endl;
	system("pause");
	return 0;
}

void read(int& a, int& b)
{
	cout << "Enter two intergers:  ";
	cin >> a >> b;
	return;
}
void swap(int& a, int& b)
{
	int hold = b;
	b = a;
	a = hold;
	return;
}
void sort(int& a, int& b)
{
	if (a > b)
		swap(a, b);
	return;
}
void display(int a, int b)
{
	cout << "\n\nIn increasing order the numbers are:  " << a << " " << b;
	return;
}
