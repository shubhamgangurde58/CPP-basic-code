#include<iostream>
using namespace std;
int swap(int x,int y)
{

	int temp;
	temp = x;
	   x = y;
	   y = temp;
	   
	cout<<"\nValue After swaping x and y\n"<<x<<y;
}
int main(){
	int x;
	int y;
	
	cout<<"\nEnter the any two value=\n";
	cin>>x>>y;
	
	
	cout<<"Value before swaping X and Y\n"<<x<<y;
	swap(x,y);
	
	return 0;
}