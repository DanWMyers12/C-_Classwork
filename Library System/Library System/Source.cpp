#include <iostream>
#include <string>
using namespace std;

string b_title, b_author, isbn, s_title;
bool b_available;

int menu();
void add_book();
bool search_book();
void borrow_book();
void print();



int main()
{
	int select;
	select = menu();
	do
	{
		switch (select)
		{
		case 1:
			add_book();
			break;
		case 2:
			if (search_book())
				cout << endl << b_title << " is available!";
			else
				cout << endl << s_title << " is NOT available!";
			break;
		case 3:
			void borrow_book();
			break;
		case 4:
			void print();
			break;
		case 5:
			break;
		default:
			cout << "Sorry please try again.";
		}
		cin.ignore();
		select = menu();
	} while (select != 5);




	system("pause");
	return 0;
}

int menu()
{
	int selection;
	cout << "*******************MAIN MENU*****************\n*******1. Add Book\n*******2. Search Book\n*******3. Borrow Book\n*******4. Display Book Info\n*******5. Exit\n***********************************************\nEnter your Choice HERE=>";
	cin >> selection;
	return selection;
}

void add_book()
{
	cout << "\nEnter your book title to add: ";
	getline(cin, b_title);
	cin.ignore();
	cout << "\nEnter Author Name: ";
	getline(cin, b_author);
	cin.ignore();
	cout << "\nEnter ISBN: ";
	getline(cin, isbn);
	cin.ignore();
	cout << "\nDone!";
	b_available = true;
}

bool search_book()
{
	cout << "\nEnter book title to search: ";
	getline(cin, s_title);
	cin.ignore();
	if (s_title == b_title)
		return true;
	else
		return false;
}
void borrow_book()
{
	cout << "\nEnter book title to borrow: ";
	getline(cin, s_title);
	cin.ignore();
	if (b_available)
	{
		cout << endl << s_title << " is available!\nPlease return the book after two weeks! :)";
		b_available = false;
	}
	else
		cout << endl << s_title << " is NOT available!\nSorry, that book is already borrowed.";
}
void print()
{
	cout << "\nBook Title: " << b_title << "\nAuthor Name: " << b_author << "\nISBN: " << isbn << "\nAvailable?";
	if (b_available)
		cout << "YES";
	else
		cout << "NO";
}