#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int c=0;
	cout<<"Enter the Value of A=";
	cin>>a;
	cout<<"Enter the Value of B=";
	cin>>b;
	cout<<"Enter the Value of C=";
	cin>>c;
	
	if( a > b )
	{
		if( a > c )
		{
			cout<<"A is big\n";
		}else{
			cout<<"C is big\n";
		}
	}
	else{
		if( b > c)
		{
			cout<<"B is big\n";
		}else{
			cout<<"C is big\n";
		}
	}
	return 0;
}
