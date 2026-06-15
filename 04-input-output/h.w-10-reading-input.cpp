
#include<iostream>
using namespace std;
int main()
{
	short int age;
	int monthlysalary, yearlysalary;
	string name, city, country;
	char gender;
	bool married;

	// asking for inputs
	cout << "enter your name\n";
	cin >> name;
	
	cout << "enter your age\n";
	cin >> age;

	cout << "enter your city\n";
	cin >> city;

	cout << "Where are you from?\n";
	cin >> country;

	cout << "What\'s your monthly salary?\n";
	cin >> monthlysalary;

	cout << "what is your gender? (m/f)\n";
	cin >> gender;

	cout << "Are you married? (1/0)\n";
	cin >> married;

	// printing inputs
	cout << "\n\n*******************************\n";

	cout << "Name: " << name << "\n";
	cout << "City: " << city << "\n";
	cout << "country: " << country << "\n";
	cout << "monthly salary: " << monthlysalary << "\n";
	cout << "yearly salary: " << monthlysalary * 12 << "\n";
	cout << "genter: " << gender << "\n";
	cout << "married: " << married << endl;

	cout << "*******************************" << endl;

		
	return 0;
}