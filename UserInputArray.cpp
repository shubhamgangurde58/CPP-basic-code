#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the Size of Array=";
	cin>>size;
	int a[size];
	cout<<"Enter the Array Element="<<endl;
	for(int i=0;i<size;i++){
			cin>>a[i];
	}
	cout<<" The Array Element is="<<endl;
	for(int i=0;i<size;i++){
			cout<<i<<"index Array="<<a[i]<<endl;
	}
}