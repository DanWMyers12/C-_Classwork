#include <iostream>
using namespace std;

//open main function
int main()
{
	//Declare variables
	float scr1=0, scr2=0, scr3=0, scr4=0, scr5=0, avg;
	char grade;
	bool pass=true;

	//Get scores
	cout << "Enter 5 scores:  \n\n";
	cin >> scr1>> scr3>> scr3>> scr4>> scr5;
	//calculate
	avg = (scr1 + scr2 + scr3 + scr4 + scr5) / 5;
	
	//letter grade assign
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
	{
		grade = 'D';
		pass = false;
	}
	else
	{
		grade = 'F';
		pass = false;
	}

	cout << "\n\nThe letter grade is:  " << grade<< endl;
	if (pass)
		cout << "The grade is passing.";
	else
		cout << "The grade is failing.";



	//pause for review before closing program
	cout << "\n\n\n";
	system("pause");
	return 0;
}