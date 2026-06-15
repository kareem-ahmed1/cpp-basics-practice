
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c ,p , area , denominator , numerator , bracket;
	const float pi = 3.14;

	cout << "enter a, b and c\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	p = (a + b + c) / (2);
	denominator = 4 * sqrt(p * (p - a) * (p - b) * (p - c));
	numerator = a * b * c;
	bracket = numerator / denominator;
	area = pi * pow(bracket, 2);

	cout << "area = " << area << endl;


	return 0;
}