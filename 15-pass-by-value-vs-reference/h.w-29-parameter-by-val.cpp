
#include<iostream>
using namespace std;

int func(int x)
{
	x++;
	return x;
}

int main()
{
	int num = 10;

	cout << func(num) << endl; // 11 
	cout << num; // 10  

  // in case you put & 
//  11
//	11 

	return 0;
}
