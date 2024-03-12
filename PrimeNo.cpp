#include<iostream>
using namespace std;

int main()
{
	int num;
	int i;
	int flag=1;
	cout<<"Enter the Any no=";
	cin>>num;
	if(num==1)
	{
		flag=1;
	
	}
	else
	{
	
		for(i=2;i<num;i++)
		{
			if( num % i == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag == 1)
	{
		cout<<"No is prime\n";	
	}
	else
	{
		cout<<"No is not prime";  
	}
	return 0;
}