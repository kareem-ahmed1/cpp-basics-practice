
#include<iostream>
using namespace std;
int main()
{
	string Name, city, country;
	int Age, monthly_salary, yearly_salary;
	char gender;
	bool married;

	Name = "Kareem", city = "Suez", country = "Eygpt";
	Age = 19, monthly_salary = 5000, yearly_salary = monthly_salary * 12;
	gender = 'M';
	married = true;

	cout << "***********************" << "\n\n";
	
	cout << "Name: " << Name << "\n\n";
	cout << "Age: " << Age << "\n\n";
	cout << "City: " << city << "\n\n";
	cout << "Coutry; " << country << "\n\n";
	cout << "Monthly salary: " << monthly_salary << "\n\n";
	cout << "Yearly salary: " << yearly_salary << "\n\n";
	cout << "Gender: " << gender << "\n\n";
	cout << "Married: " << married << endl << endl;

	cout << "***********************";



	return 0;
}