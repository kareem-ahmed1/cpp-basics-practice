                       
//structure for data 
//function for printing
//finction for reading 
//array for persons

#include<iostream>
#include<string>
using namespace std;

struct strpersondata {

	string name;
	int age;
	int phone;
};

void readinfo(strpersondata &data) {

	cout << " name : ";
	cin >> data.name;
	cout << "Age : ";
	cin >> data.age;
	cout << "phone : ";
	cin >> data.phone;
}

void printinfo(strpersondata data) {

	cout << "\n" << "Name --> " << data.name << "\n";
	cout << "Age --> " << data.age << "\n";
	cout << "Phone --> " << data.phone << endl << endl; 

}

int main()
{
	strpersondata person[3];

	readinfo(person[0]);
	printinfo(person[0]);

	readinfo(person[1]);
	printinfo(person[1]);

	readinfo(person[2]);
	printinfo(person[2]);


	return 0;
}