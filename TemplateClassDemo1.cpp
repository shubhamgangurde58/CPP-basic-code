#include<iostream>
using namespace std;
template <class T1, class T2>

int add(T1 x,T2 y){
		
	 
	cout<<"\nAddition="<<x+y;
}

int main(){

	int a=10,b=5;
	float m=15.2,n=5.4;
	
	add(a,b);
	add(m,n);
	add(a,n);
	add(m,b);
		
}
