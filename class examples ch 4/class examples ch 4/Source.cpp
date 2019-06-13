//Predefined Funstions

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int rdm(int rstart, int rend)
	


int main()
{
	//Var
	const float PI = 3.14159;
	int radius, radius1;
	float area;
	//code
	radius = rdm(5, 25);
	area = pow((float)radius, 2)*PI;
	//cout.setf(ios::fixed);
	//cout.setf(ios::showpoint);
	//cout.precision(2);
	cout << RAND_MAX << endl;
	cout << "The area of the circle, radius " << radius << ", is:  " << area <<endl;

	system("pause");
	return 0;

}

{
		int range = rend - rstart;
		int rout;
		srand(time(NULL));
		rout = (rand() % rstart) + range;
		return rout;
1}