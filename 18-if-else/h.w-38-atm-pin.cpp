#include<iostream>
using namespace std;

struct strpin {
	int pin;
};

void readpin(strpin &pin) {

	cout << "Your pin ? : ";
	cin >> pin.pin;
}

void checkpin(strpin pin) {

	if (pin.pin == 1234) {
		cout << "----------------------" << endl;
		cout << "PASSED" << '\n' << endl;
	}
	else {

		cout << "----------------------" << endl;
		cout << "WRONG PIN" << '\n' << endl;

	}
}

int main()
{
	strpin person1;
	readpin(person1);
	checkpin(person1);

	strpin person2;
	readpin(person2);
	checkpin(person2);

	strpin person3;
	readpin(person3);
	checkpin(person3);



	return 0;
}