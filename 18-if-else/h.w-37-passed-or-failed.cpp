
#include<iostream>
using namespace std;

struct strdata {

	float mark1 , mark2 , mark3;
	float avg;
};

void readdata(strdata& data){

	cout << "your first mark ? : ";
	cin >> data.mark1;
	cout << "your second mark ? : ";
	cin >> data.mark2;
	cout << "your third mark ? : ";
	cin >> data.mark3;

}

float calculateavg(strdata& avg) {

	avg.avg = (avg.mark1 + avg.mark2 + avg.mark3) / 3;
	return avg.avg;
}

void checkdata(strdata data) {

	if (data.avg >= 50) {

		cout << "-----------------------" << endl;
		cout << "PASSED";
	}
	else {
		
		cout << "-----------------------" << endl;
		cout << "FAILED"; 
	}
}

int main()
{
	strdata student1;

	readdata(student1);
	calculateavg(student1);
	checkdata(student1);


	return 0;
}