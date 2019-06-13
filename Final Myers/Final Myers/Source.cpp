/*
part of a 2hour final test which included this program creation, from scratch, and several (25-30) questions from the material.

Write a C++ program to manage a hospital system, the system mainly uses file
handling to perform basic operations like how to add, edit, search, and delete
record.Write the following functions :
1. hospital_menu : This function will display the following menu and prompt
the user to enter her / his option.The system will keep showing the menu
repeatedly until the user selects option 'e' from the menu.
Arkansas Children Hospital
a.Add new patient record
b.Search record
c.Delete a record
d.Print all records
e.Exit
Enter your choice HERE = >
2. add_new_patient: This function uses to add anew patient record.The
record includes; patient’s id, name, address, date of birth(month, day,
	year), and gender.All records’ information should be stored in file named
	“Patient.txt”.This function will be called when the user selects option 'a'.
	3. search_patient_record: This function uses to search for a specific patient
	record in file “Patient.txt”.The search will be based on the patient’s date of
	birth(month, day, and year).For confirmation, check the first and last
	name, if matched, all the information corresponding to the respective
	patient are displayed, else display; “This is a new patient, please select
	option ‘a’ from the menu”.This function will be called when the user
	selects option ‘b’.
	4. delete_patient_record: This function uses to delete a specific record from
	the file “Patient.txt”, i.e.the matched patient’s id record will be deleted.
	This function will be called when the user selects option 'c'.
	5. print_all_record : This function displays a list of all patients’ records in
	alphabetic order(ascending).This function will be called when the user
	selects option ’d’.
	*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ifstream reader;

char hospital_menu();
void add_new_patient();
void search_patient_record();
void delete_patient_record();
void print_all_record();


int main()
{
	char select;


	do
	{
		select = hospital_menu();
		switch (select)
		{
			case 'a':
			case 'A':
				add_new_patient();
				break;
			case 'b':
			case 'B':
				search_patient_record();
				break;	
			case 'c':
			case 'C':
				delete_patient_record();
				break;
			case 'd':
			case 'D':
				print_all_record();
				break;
			case 'e':
			case 'E':
				break;
			default:
				cout << "\n Input outside parameters, please try again";
		}
	}while ((select != 'e' || select != 'E'));

	return 0;
}

char hospital_menu()
{
	char select;
	cout << "\nArkansas Children Hospital\n  a.Add new patient record\n  b.Search record\n  c.Delete a record\n  d.Print all records\n  e.Exit\n\n  Enter your choice HERE = >";
	cin >> select;
	return select;
}

void add_new_patient()
{
	ofstream writer;
	string dob, fname, lname, addy, id;
	reader.open("Patient.txt");
	cout << "Enter First Name:  ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << "Enter patient ID: ";
	getline(cin, id);
	cout << "Enter address";
	getline(cin, addy);

	writer.open("Patient.txt");
	writer.app >> dob;
	writer.app >> lname;
	writer.app >> fname;
	writer.app >> id;
	writer.app >> addy;

	return;
}
void search_patient_record()
{
	string dob;
	reader.open("Patient.txt");
	
	do
	{
		cout << "Enter patient DOB:  ";
		getline(cin, dob);
		reader.getline(dob;)
			for(a=0;)
	}
	return;
}
void delete_patient_record()
{
	sting dob;
	cout << "Enter patient DOB:  ";
	getline(cin, dob);
	reader.clear()
	return;
}
void print_all_record()
{
	while (!reader.eof)
	{
		int a = 0;
		cout << reader.getline);
	}
	return;
}

