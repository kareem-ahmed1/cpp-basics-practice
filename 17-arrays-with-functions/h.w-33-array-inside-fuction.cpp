
#include <iostream>
using namespace std;

void readinfo(int x[3])
{
	cout << "first element : ";
	cin >> x[0];
	cout << "second element : ";
	cin >> x[1];
	cout << "third element : ";
	cin >> x[2];

	cout << "\n\n";
}

void printinfo(int c[3]) {

	cout << "first element is " << c[0] << endl;
	cout << "second element is " << c[1] << endl;
	cout << "third element is " << c[2] << endl;
}

int main()
{
	int r[3];
	readinfo(r);
	printinfo(r);
	return 0;
}