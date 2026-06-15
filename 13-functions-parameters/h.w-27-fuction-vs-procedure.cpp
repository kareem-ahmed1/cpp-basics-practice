
#include<iostream>
using namespace std;

void procedure()
{
	int num1, num2;

	cout << "enter first num : ";
	cin >> num1;
	cout << "enter sec num : ";
	cin >> num2;

	cout << "num1 + num2 = " << num1 + num2 << "\n" << endl;
}

int sumfunc()
{
	int num1, num2;

	cout << "enter first num : ";
	cin >> num1;
	cout << "enter sec num : ";
	cin >> num2;

	cout << "num1 + num2 = ";
	return num1 + num2;

}

int parameter(int num1, int num2)
{

	return num1 + num2;
}


int main()
{


	procedure(); //procedure

	cout <<  sumfunc() << endl; //function

	int num1, num2;
	cout << "\nenter first num : ";
	cin >> num1;
	cout << "enter sec num : ";
	cin >> num2;

	cout << "num1 + num2 = " << parameter(num1, num2) << endl; //parameter function

	return 0;

}
