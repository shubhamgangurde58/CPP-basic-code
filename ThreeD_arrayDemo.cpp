#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	cout<<"Enter the 3*3 matrix:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\nEnter the 3*3 matrix:\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			//cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";	
			cout<<"\t"<<arr[i][j];
		}
		cout<<"\n";	
	}
	return 0;
}