
#include<iostream>
#include<string>
using namespace std;

void func()
{
	string name;
	int num;
	cout << "enter a num : ";
    cin >> num;
	cout << "please enter your name : "  ;
	cin.ignore(1, '\n');
	getline(cin, name);

	cout << "your name is : " << name << endl;

}


int main()
{

	func();



	return 0;
}