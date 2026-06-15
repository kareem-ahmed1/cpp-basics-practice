
#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
 
	cout << "first num is : " << num2 << "\n" << "second num is : " << num1 << endl;
}



int main()
{
	int n1, n2;
	cout << "first num is : ";
	cin >> n1;
	cout << "second num is : ";
	cin >> n2;

	swap(n1, n2);

	return 0;
}