#include<iostream>
using namespace std;
int main()
{

	cout << ((5 > 6 && 7 == 7) || (true || false)) << endl;

	cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;

	cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;

	cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;

	cout << (((5 > 6 && 7 == 7) || (8 > 1 && 4 <= 3)) && true) << endl;






	return 0;
}