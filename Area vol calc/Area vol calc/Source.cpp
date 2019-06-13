#include <iostream>
#include <cmath>
using namespace std;

//global var
const float PI = 3.14;
float rad;
//function declaration
float area();
float area(int);
float area(int, int);
float perim();

//main funtion
int main()
{
	rad = 5;
	int side = 10, len = 12, wid = 6;
	cout << "\nArea of a circle with radius " << rad << " is:  " << area();
	cout << "\nCircumference of a circle with radius " << rad << " is:  " << perim();
	cout << "\nArea of a square with sides " << side << " is:  " << area(side);
	cout << "\nArea of a rectangle "<< wid << " wide and "<<len<<" long is:  " << area(len,wid)<<endl<<endl;


	//pause for review and exit program
	system("pause");
	return 0;
}

float area()
{
	return(pow(rad, 2)*PI);
}
float area(int side)
{
	return(pow(side, 2));
}
float area(int length, int width)
{
	return(length*width);
}
float perim()
{
	return(2 * rad*PI);
}