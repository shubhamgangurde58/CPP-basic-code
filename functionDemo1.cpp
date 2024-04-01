#include<iostream>
using namespace std;
void add(int a,int b){
	int c = a+b;
	cout<<"\nAddition="<<c;
}
void sub(int a,int b){
	int  c = a-b;
	cout<<"\nsubtraction= "<<c;
}
int main(){
	add(10,50);
	sub(100,10);
	return 0;
}