
#include<iostream>
using namespace std;

enum color {red , yellow , green};


int main()
{

	color color1 , color2;

	color1 = color::red;
	color2 = color::green;

	cout << "first color is : " << color1 << endl; // 0
	cout << "second color is : " << color2 << endl; // 2





	return 0;
}