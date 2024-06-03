#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int j;
	cout<<"Enter a no:"<<endl;
	cin>>n;
	
	for(i=0,j=10;i<n;i++,j--)
	{
		cout<<i<<""<<"\t"<<j<<endl;
	}
	return 0;
}