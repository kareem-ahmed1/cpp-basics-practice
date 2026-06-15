
#include <iostream>
using namespace std;
int main()
{
	float num1, num2, temp;

	cout << "num1?\n";
	cin >> num1;
	cout << "num2?\n";
	cin >> num2;

	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "\n" << num1 << "\n" << num2 << endl;

	return 0;
}