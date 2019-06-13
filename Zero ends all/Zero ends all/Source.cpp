#include <iostream>
using namespace std;

int main()
{
	// Declare variables
	int u_input, even_cnt=0,odd_cnt=0;


	cout << "Please enter various integers[Enter 0 to stop]:  ";
/*	do 
	{	
		cin >> u_input;
		cin.ignore();
		if (u_input != 0)
		{
			if ((u_input % 2) != 0)
				odd_cnt ++;
			else
				even_cnt ++;
		}

	} while (u_input != 0);
*/
	u_input = 1;
	while (u_input != 0)
	{
		cin >> u_input;
		cin.ignore();
		if (u_input != 0)
		{
			if ((u_input % 2) != 0)
				odd_cnt++;
			else
				even_cnt++;
		}
	}

	//display
	cout << "End character encountered. Displaying results.\n\n";
	cout << "Even numbers:  " << even_cnt<<endl;
	cout << "Odd numbers:  " << odd_cnt << endl<<endl<<endl;


	system("pause");
	return 0;
}