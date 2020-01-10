#include<iostream>
using namespace std;
int main()
{
	double x,sum=0;
	cout << "Enter x: ";
	cin >> x;
	int i=1;
	while(x!=0)
	{
		if(x>0)
		{
			sum=sum+x;
		}
			cout << "Enter x:" ;
			cin>>x;
	}	
		cout << "sum = " << sum;
}

