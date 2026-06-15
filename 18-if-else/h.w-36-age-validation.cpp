
#include<iostream>
using namespace std;

struct strinfo {
	 short int age;
	bool license;

};

void askinfo(strinfo &info){


	cout << "enter your age : ";
	cin >> info.age;
	cout << "do you have license ? (0 for no , 1 for yes) : ";
	cin >> info.license;

} 

void checkinfo(strinfo info) {
	if (info.age >= 18 && info.license == true)
	{
		cout << "-------------------" << endl;
		cout << "Approved";
	}
	else
	{
		cout << "-------------------" << endl;
		cout << "rejected";
	}

}

int main()
{
	strinfo person1;
	
	askinfo( person1);
	checkinfo(person1);

	return 0;
}