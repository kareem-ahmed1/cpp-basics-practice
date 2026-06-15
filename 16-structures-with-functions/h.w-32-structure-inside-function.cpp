
#include<iostream>
#include <string>
using namespace std;
 
//enum encategory {dairy,bakery,snack};

struct strproduct {
	string name;
	float price;
	string category;
};

void readinfo(strproduct& info) {

	cout << " product name : ";
	cin.ignore(1, '\n');
	getline(cin, info.name);
	cout << " product category : ";
	cin >> info.category; 
	cout << " product price : ";
	cin >> info.price;
		
}

void printinfo (strproduct infoo ){

	cout << "\n\n" << "Product name is : " << infoo.name << endl;
	cout << "Category : " << infoo.category << endl;
	cout << "price is : " << infoo.price << endl << endl;
	
}

int main()
{
	strproduct product1;
	readinfo(product1);
	printinfo(product1);

	strproduct product2;
	readinfo(product2);
	printinfo(product2);

	return 0;
}