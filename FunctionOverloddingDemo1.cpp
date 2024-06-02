#include<iostream>
using namespace std;

void add(int x,int y){
		
	int c=x+y;
	cout<<"\nAddition="<<c;
}

void add(float x,float y){
		
	float c=x+y;
	cout<<"\nAddition="<<c;
}
void add(int x,float y){
		
	float c=x+y;
	cout<<"\nAddition="<<c;
}
void add(float x,int y){
		
	float c=x+y;
	cout<<"\nAddition="<<c;
}






int main(){

	int a=10,b=5;
	float m=15.2,n=5.4;
	
	add(a,b);
	add(m,n);
	add(a,n);
	add(m,b);
		
}
