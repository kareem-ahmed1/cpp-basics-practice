
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name , s1 , s2;
	cout << "enter your name : ";
	getline(cin, name);

	cout << "enter s1 : ";
	cin >> s1;
	cout << "enter s2 : ";
	cin >> s2;

	cout << "******************\n";

	cout << "Length of name is : " << name.length() << endl;
	cout << "Character at 0,2,4 are " << name[0] << " " << name[2] << " " << name[4] << endl;
	cout << "Concatenating s1 , s2 : " << s1 + s2 << endl;
	cout << s1 << " * " << s2 << " = " << stoi(s1) * stoi(s2) << endl;


	return 0;
}