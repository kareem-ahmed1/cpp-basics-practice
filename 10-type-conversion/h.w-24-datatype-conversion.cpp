
#include<iostream>
#include<string>
using namespace std;





int main()
{
	 string str = "43.44";

	double doub = stod(str);
	float flt = stof(str);
	int num = int(flt);

	cout << "str to double : " << doub << "\n";
	cout << "str to float : " << flt << "\n";
	cout << "str to int : " << num << endl;
	
	


	return 0;
}