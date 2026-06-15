
#include <iostream>
using namespace std;

int x = 5;

int func()
{
	int x = 10;
	return x + 100;
}


int main()
{
	int x = 15;
	cout << "Global value : " << ::x << endl;
	cout << "Local value in func : "<<  func() << endl;	
	cout << "Local value in main func : " << x << endl;


	return 0;
}