
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b , area;
	const float pi = 3.14;

	cout << "enter a and b \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	area = (pi) * ((pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));

	cout << "area = " << area << endl;


	return 0;
}