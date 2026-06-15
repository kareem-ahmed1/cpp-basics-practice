
#include <iostream>
using namespace std;

enum encolors{red =1 , blue=2, green=3 , yellow=4};

void screencolor(encolors &colors, int &c) {

	cout << "****************************\n";
	cout << "Please Chose the number of your color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "****************************\n\n";
	cout << "Your Choice? ";

	cin >> c;
	colors = encolors(c);

	switch (colors) {

	case red:
		system("color 4f");
		break;
	case blue:
		system("color 1f");
		break;

	case green:
		system("color 2f");
		break;

	case yellow:
		system("color 6f");
		break;

	default:
		system("color 5f");

	}

}



int main()
{
	encolors colors;
	int c ;

	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);
	screencolor(colors, c);


	return 0;
}