
#include<iostream>
using namespace std;

enum enfavcolor {red , blue , green};
enum engender {male , female};
enum enstatus {married , single};

struct staddress {

	string city , street ;
};

struct stcontactinfo {

	string phone, email;
	staddress address;
};

struct stpersoninfo {

	string firstname, lastname;
	
	stcontactinfo contactinfo;
	
	enfavcolor favcolor;
	engender gender;
	enstatus status;
};


int main()
{

	stpersoninfo person1;

	person1.firstname = "Kareem";
	person1.lastname = "Taha";

	person1.contactinfo.address.city = "Suez";
	person1.contactinfo.address.street = "share3";

	person1.contactinfo.phone = "0280374037";
	person1.contactinfo.email = "hfdj2gmail.com";
	
	person1.favcolor = enfavcolor::red;
	person1.gender = engender::male;
	person1.status = enstatus::single;

	cout << person1.contactinfo.address.city << " , " << person1.contactinfo.address.street << endl;








	return 0;
}