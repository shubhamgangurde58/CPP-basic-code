#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"Enter the value of A=";
	cin>>a;
	
	cout<<"Enter the value of B=";
	cin>>b;
	
//	printf("Enter the value of b="3;

	int add=a+b;
	int sub=a-b;
	float multi=a*b;
	float divi=a/b;
	cout<<"\nAddition="<<add;
	cout<<"\nSubtraction="<<sub;
	cout<<"\nMultiplication="<<multi;
	cout<<"\ndivision="<<divi;
	return 0;
}