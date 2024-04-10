#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	
	cout<<"Original value:"<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	
	a=a-b;		// -10= 10-20; 
	b=a+b;		//  10= -10+20;
	a=b-a;		//  20= 10--10;
	
	cout<<"After Swaping:"<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	return 0;
}