#include <iostream>
using namespace std;

 
//Function Declarations
char pass_check(float);
float entry();

int main()
{
	//Variable
	char status=pass_check(entry());
	//Display
	cout << endl << "Your status is:\n[P=Pass,F=Fail]:  " << status;
	//Pause for review and exit program
	cout << endl << endl << endl << endl;
	system("pause");
	return 0;
}

//Function Definitions
char pass_check(float std_avg)
{
	//local variable
	const float MIN_SCR = 70;
	//compare
	if (std_avg >= MIN_SCR)
		return 'P';
	else
		return 'F';
}

float entry()
{
	//local variable
	float std_avg;
	//Get input
	cout << "Enter your Score:  ";
	cin >> std_avg;
	return std_avg;
}

