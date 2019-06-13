#include <iostream>
#include <string>
using namespace std;

bool checkper(string, string);
void display(bool);

int main()
{
	string name, pass;
	
	cout << "USER NAME:  ";
	getline(cin, name);
	cout << "PASSWORD:  ";
	cin >> pass;

	display(checkper(name, pass));



	system("pause");
	return 0;
}

bool checkper(string name, string pass)
{
	return (name == "Sara Smith" && pass == "123456");
}
void display(bool chk)
{
	if (chk)
		cout << "\n\nWELCOME!\n\n";
	else
		cout << "\n\nTry Again\n\n";
}