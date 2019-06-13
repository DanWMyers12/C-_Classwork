//Score Averaging Program
#include <iostream>
using namespace std;

int main()
{
	//Declare Variables
	float scr_1=0, scr_2=0, scr_3=0, scr_4=0, scr_5=0,scr_avg=0;

	//Input Scores
	cout<< "Please enter the first score...\n";
	cin >> scr_1;
	cout << "\nPlease enter the next score...\n";
	cin >> scr_2; 
	cout << "\nPlease enter the next score...\n";
	cin >> scr_3;
	cout << "\nPlease enter the next score...\n";
	cin >> scr_4;
	cout << "\nPlease enter the final score...\n";
	cin >> scr_5;
	//Get Average and display
	scr_avg = (scr_1 + scr_2 + scr_3 + scr_4 + scr_5) / 5;
	cout << "\n\nThe average score is ";
	cout << scr_avg<<endl;
	system("pause");
	return 0;
}