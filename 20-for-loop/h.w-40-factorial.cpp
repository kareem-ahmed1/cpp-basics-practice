
#include <iostream>
using namespace std;

void askuser(int& n) {

	cout << "enter num : ";
	cin >> n;

}

 int factorial (int n) {
	
	 int factorial = 1 ;

	for (int i = 1; i <= n; i++) {

		factorial *= i;

		 if (i < n) {

			cout << i << " * ";
		}
		else {

			cout << i << " = " ;
		}

	}

	return factorial ;
}


int main()
{
	int n;
	askuser(n);
	cout << factorial(n);

	
	return 0;
}
