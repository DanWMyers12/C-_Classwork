#include <iostream>
using namespace std;

/*Write a C++ program to do the following for 5 students:

1. Enter students scores from the keyboard.

2. find the average.*/

int main()
{
	//Variables
	int num_students, a=1;
	int num_scores, i;
	float input, score, avg;

	//Code body
	cout << "Please enter number of students:  ";
	cin >> num_students;
	cout << endl;
	
	for (num_students; num_students > 0; num_students--)
	{
		cout << "Student " << a++ << endl;
		score = 0;
		cout << "Please enter number of scores to enter:  ";
		cin >> num_scores;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		if (num_scores > 0)
		{
			i = num_scores;
			while (i > 0)
			{
				cout << "Please enter a score:  ";
				cin >> input;
				score += input;
				i--;
			}//while
			avg = score / num_scores;
			
			cout << "The average for this student is " << avg << endl << endl;
		}//if numscores > 0
		else if (num_scores == 0)
		{
			avg = 0;
			cout << "The average for this student is " << avg << endl << endl;
		}//if num_scores is 0
		else
		{
			++num_students;
			--a;
			cout << "Invalid entry, try again... " << endl << endl;
		}//if num_scores < 0
	}
	system("pause");
	return 0;
}