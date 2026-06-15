#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float  r , area;
	const float pi = 3.14 ;


	cout << "enter radius\n";
	cout << "r = ";
	cin >> r;

	area = pi * pow(r, 2);
	
	cout << "area = " << area << endl;

	return 0;
}