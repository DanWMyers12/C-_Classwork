#include <iostream>
#include <string>
using namespace std;

string enter_name();
bool check_name(string);
void display_result(bool);

int main()
{
	display_result(check_name(enter_name()));

	system("pause");
	return 0;
}
string enter_name()
{
	string name;

	cout << "Enter your name:  ";
	getline(cin, name);
	return name;
}
bool check_name(string name)
{
	return (name == "Sara Smith");
}
void display_result(bool chk)
{
	if (chk)
		cout << "\n\nMATCHED\n\n";
	else
		cout << "\n\nNOT MATCHED\n\n";
}