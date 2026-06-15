
#include<iostream>
using namespace std;
struct student {

	string name;
	int age;
	float grade;

};

int main()
{
	student s1, s2;

	cout << "enter first student name" << endl;
	cin >> s1.name;
	cout << "enter first student age" << endl;
	cin >> s1.age;
	cout << "enter first student grade" << endl;
	cin >> s1.grade;

	cout << "first student name : " << s1.name << endl;
	cout << "first student age : " << s1.age << endl;
	cout << "first student grade : " << s1.grade << endl;
	







	return 0;
}