//Call needed libraries
#include <iostream>
#include <string>
using namespace std;

//open main function
int main()
{
	/* Input Guidance
		1. Enter first name
		2. Enter last name
		3. Enter DOB
		4. Enter Address
		5. Enter Income
		6. Enter SSN
		7. Enter Gender(f: female m : male)
		8. Enter ID
		9. Graduation Year
		10. Enter 3 scores
		11. Enter phone No.
	*/
	//Declare variables

	string fname, lname, addss, bdate, phone, spc = "\t\t";
	char gender;
	double income;
	int gyear, ssn, id;
	float scr1=0, scr2=0, scr3=0;

	cout << "Please enter your first name.  ";
	getline(cin, fname);
	cout << endl<<"Please enter your last name.  ";
	getline(cin, lname);
	cout << endl << "Please enter your Date of Birth.\n[MM/DD/YYYY - include slashes]  ";
	getline(cin, bdate);
	cout << endl << "Please enter street address\n[Omit city and state]  ";
	getline(cin, addss);
	cout << endl << "Please enter weekly income.  ";
	cin >> income;
	cout << endl << "Please enter SSN\n[9-10 digit number- No Formatting(-,. etc...)]  ";
	cin >> ssn;
	cout << endl << "Enter Gender\n[m - male, f - female, o - other]  ";
	cin >> gender;
	cout << endl << "Please enter your ID number.  ";
	cin >> id;
	cout << endl << "Please enter projected graduation year.  ";
	cin >> gyear;
	cout << endl << "Please enter first score.  ";
	cin >> scr1;
	cout << endl << "Please enter second score.  ";
	cin >> scr2;
	cout << endl << "Please enter third score.  ";
	cin >> scr3;
	cin.ignore();
	cout << endl << "Please enter phone number\n[Enter number as you wish to see it dispalyed].  ";
	getline(cin,phone);


	/* Output Guidance
		*************************************************
		Full Name DOB Address Score 1
		XXXXX Xx / xx / xxx XXX XXX XXX xx.xx
		_________________________________________________
		Income SSN Gender Score 2
		xxx.xxx XXX - XX - XXXX x xx.xx
		_________________________________________________
		ID Graduation Year Phone No.Score 3
		xxxxxx xxxx xxx - xxx - xxxx xx.xx
		*************************************************
		*/
	//Output

	cout << "\n\n\n*************************************************\n";
	cout << "Full Name\t\tDOB\t\tAddress\t\tScore 1\n";
	cout << fname << " " << lname <<spc<<bdate<<spc<<addss<<spc<<scr1<<endl;
	cout << "_________________________________________________\n";
	cout << "Income\t\tSSN\t\tGender\t\tScore 2\n";
	cout << income <<spc<<ssn<<spc<<gender<<spc<<scr2<<endl;
	cout << "_________________________________________________\n";
	cout << "ID\t\tGrad Year\t\tPhone No.\t\tScore 3\n";
	cout << id << spc << gyear << spc << phone << spc << scr3 << endl;
	cout << "_________________________________________________\n";
	//pause for review and exit program
	system("pause");
	return 0;
}
