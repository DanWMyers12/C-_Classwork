#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
/* Assingment Guideance
Write a C++ program to create the following menu.The user should select form the menu and enter the answer and the program should check the answer and display correct or incorrect.

MATH TEST

1. Find the Area of Circle

2. Find the Area or Rectangle

3. Find the Perimeter of Rectangle

4. Find the Volume of Cube

5. Exit

Enter your choice HERE = >
*/

//function declarations
int menu();
int rdm(int, int);
string c_area();
string r_area();
string perimeter();
string vol();


//Main function
int main()
{
	//local var
	int opt;
	string result;
	//seed rand
	srand(time(NULL));
	do
	{
		system("cls");
		opt = menu();
		switch (opt)
		{
		case 1:
			result = c_area();
			cout << result;
			break;
		case 2:
			result = r_area();
			cout << result;
			break;
		case 3:
			result = perimeter();
			cout << result;
			break;
		case 4:
			result = vol();
			cout << result;
			break;
		case 5:
			cout << "\n Goodbye!";
			break;
		default:
			cout << "Selection invalid, please try again";
			opt = 0;
			break;
		}
		cout << endl << endl << endl;
		system("pause");
	} while (opt != 5);

}

//function definiations
int menu()
{
	int opt;
	cout << "\t\tMATH TEST\n 1. Find the Area of Circle\n 2. Find the Area or Rectangle\n 3. Find the Perimeter of Rectangle\n 4. Find the Volume of Cube\n 5. Exit\n\n Enter your choice HERE = >  ";
	cin >> opt;
	return opt;
}
int rdm(int start,int last)
{
	int out = (rand() % last) + start;
	return out;
}
string c_area()
{
	const double PI = 3.14;
	int rad = rdm(1, 50);
	double answer;
	double input;
	answer = PI*pow(rad, 2);
	cout << "\n\nGiven a circle with a radius of " << rad << ", find the area of the circle.\n\n Enter your answer here(pi = 3.14) =>  ";
	cin >>input;
	if (input == answer)
		return "\nCorrect!\n";
	else
		return "\nIncorrect...\n";
}
string r_area()
{
	int sidea = rdm(1, 50);
	int sideb = rdm(1, 50);
	int answer = sidea*sideb;
	int input;
	cout << "\nGiven a rectangle with length=" << sidea << " and width=" << sideb << ", find the Area of the rectangle.\n Enter answer here=>  ";
	cin >> input;
	if (input == answer)
		return "\nCorrect!\n";
	else
		return "\nIncorrect...\n";
}
string perimeter()
{
	int sidea = rdm(1, 50);
	int sideb = rdm(1, 50);
	int answer = (2*sidea)+(2*sideb);
	int input;
	cout << "\nGiven a rectangle with length=" << sidea << " and width=" << sideb << ", find the Perimeter of the rectangle.\n Enter answer here=>  ";
	cin >> input;
	if (input == answer)
		return "\nCorrect!\n";
	else
		return "\nIncorrect...\n";
}
string vol()
{
	int sidea = rdm(1, 50);
	int answer = sidea*sidea*sidea;
	int input;
	cout << "\nGiven a cube with sides equal to " << sidea << ", find the Volume of the cube.\n Enter answer here=>  ";
	cin >> input;
	if (input == answer)
		return "\nCorrect!\n";
	else
		return "\nIncorrect...\n";
}
