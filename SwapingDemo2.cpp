#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	
	cout<<"Original value:"<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	
	a=a^b;		
	b=a^b;	
	a=b^a;	
		
	cout<<"After Swaping:"<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	return 0;
}