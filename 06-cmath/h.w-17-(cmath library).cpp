
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	float a, b ,power_minus , area;

	cout << "enter a and d\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	power_minus = (pow(b, 2)) - (pow(a, 2));
	area = a * (sqrt(power_minus)) ;

	cout << "area = " << area << endl;



	return 0;
}
