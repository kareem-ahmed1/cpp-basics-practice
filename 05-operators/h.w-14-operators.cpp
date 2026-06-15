
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;

	cout << "first num?\n";
	cin >> num1;
	cout << "second num?\n";
	cin >> num2;

	cout << num1 << " = " << num2 << " is " << (num1 == num2) << endl;
	cout << num1 << " != " << num2 << " is " << (num1 != num2) << endl;
	cout << num1 << " > " << num2 << " is " << (num1 > num2) << endl;
	cout << num1 << " < " << num2 << " is " << (num1 < num2) << endl;
	cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << endl;
	cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << endl;


	return 0;
}