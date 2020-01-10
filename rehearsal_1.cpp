#include<iostream>
using namespace std;
int main()
{
	string a;
	double b=0;
	cout << "Enter your name? : ";
	cin>>a;
	cout<< "Enter your GPA? : ";
	cin>>b;
	if(b>=3.50)
	{
		cout << a << " InW Jrim Jrim!!! ";
	}else
	{
		cout << "Try harder, " << a <<"!!!";
	}
	return 0;
}
