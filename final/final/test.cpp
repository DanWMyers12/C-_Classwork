#include <iostream>
#include <set>

using namespace std;


int main()
{
	set<char> mySet;
	char input;

	do
	{
		cin >> input;
		mySet.insert(input);
		for (auto item : mySet)
		{
			cout << item << " ";
		}
		cout << endl;
	} while (input != 0);

	return 0;
}