#include <iostream>
using namespace std;

int main()
{
	//Declare v's
	char select;
	bool loop_me=true;
	double below18 = 10, below65 = 20.99, over65 = 30.50, total=0;

	do
	{
		system("cls");
		cout << "Please enter letter associated with your age:\n\t<A> 17 years and below\n\t<B> 18 years to 65 years\n\t<C> 65 years and above\n\t<D> Exit\n\n\tYour Choice =>  ";
		cin >> select;
		switch (select) {
		case 'A':
		case 'a':
			total += below18;
			break;
		case 'B':
		case 'b':
			total += below65;
			break;
		case 'C':
		case 'c':
			total += over65;
			break;
		case 'D':
		case 'd':
			loop_me = false;
			break;
		default:
			cout << "\nInput outside of expected parameters.\nPlease try again.\n\n\n";
		}
	} while (loop_me);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Total ticket cost will be $" << total<<endl<<endl;
	

	system("pause");
	return 0;
}