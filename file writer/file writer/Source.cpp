#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writetofile(ofstream&, string);
void readfromfile();

int main()
{
	ofstream write;
	string fl_name = "student.txt";
	string input;
	
	//writetofile(write, fl_name);
	readfromfile();
	system("pause");
	return 0;
}

void writetofile(ofstream& write, string file_name)
{
	string input;
	write.open(file_name,ios::app);
	if (write.fail())
	{
		cout << "Error: File cannot open file" << endl;
		system("exit");
	}
	cout << "Enter Student Name:  ";
	getline(cin, input);
	write << input << endl;
	write.close();
	return;
}

void readfromfile()
{
	string lines;
	ifstream read;
	read.open("student.txt");
	if (read.fail())
	{
		cout<< "Error: File cannot open file" << endl;
		system("exit");
	}

	while (!read.eof())
	{
		//read>>lines;
		getline(read, lines);
		cout << lines << endl;
	}
}
