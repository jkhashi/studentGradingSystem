#include <iostream>
#include <string>
using namespace std;

int main()
{
	string studentid = string();
	string firstname = string();
	string lastname = string();
	double CS11score = double();
	double CS12score = double();
	double CS21score = double();
	double total = double();
	double avg = double();

	cout << "*********************\n" << endl;
	cout << " " << endl;
	cout << " lbcc lac campus" << endl;
	cout << " author: joe khashi" << endl;
	cout << "     4/30/17" << endl;
	cout << "\n**********************\n" << endl;

	cout << " enter student id: " << endl;
	cin >> studentid;

	cout << " enter first name: " << endl;
	cin >> firstname;

	cout << " enter last name: " << endl;
	cin >> lastname;

	cout << " your score for CS11: " << endl;
	cin >> CS11score;

	cout << " your score for CS12: " << endl;
	cin >> CS12score;

	cout << " your score for CS21: " << endl;
	cin >> CS21score;

	total = CS11score+CS12score+CS21score;
	avg = total / 3;

	cout << " your total is: " << total << endl;
	cout << " your average is: " << avg << endl;

	if (avg >= 90)
	{
		cout << " you've got an A! congrats!" << endl;
	}


	else if (avg >= 80)
	{
		cout << " you've gotten yourself a B. nice job sir." << endl;
	}

	else if (avg >= 70)
	{
		cout << " you're at a c average." << endl;
	}

	else if (avg >= 60)
	{
		cout << "you're at a d." << endl;
	}

	else if (avg >= 50)
	{
		cout << "ouch you failed. F." << endl;
	}
	cout << "\n**************************\n\n" << endl;

	return 0;
}