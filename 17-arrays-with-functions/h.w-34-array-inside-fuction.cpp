
#include<iostream>
using namespace std;

void readinfo(int x[3]) {

	cout << "first element : ";
	cin >> x[0];
	cout << "second element : ";
	cin >> x[1];
	cout << "third element : ";
	cin >> x[2];

	cout << "\n\n";
}

int calculateavg(int x[3]) {

	return (x[0] + x[1] + x[2]) / 3;
}

int main()
{
	int x[3];
	readinfo(x);
	cout << "averege = " << calculateavg(x) << endl;


	return 0;
}