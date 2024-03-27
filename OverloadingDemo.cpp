#include<iostream>
using namespace std;

class OverloadingDemo{
	
	public:
	void add(int a){
		cout<<"\nOverloading Demo"<<endl;
		cout<<"\na="<<a;
	}
	void add(int a,int b){
		int c = a+b;
		cout<<"\nAddition="<<c;
	}
	void add(float x,float y){
		float c = x+y;
		cout<<"\nAddition"<<c;
	}
	void add(int a,float x){
		float c = a+x;
		cout<<"\nAddition="<<c;
	}
	
};
int main(){
	int a = 10;
	int b = 40;
	float x = 10.5;
	float y = 15.2;
	OverloadingDemo obj;
	obj.add(a);
	obj.add(a,b);
	obj.add(x,y);
	obj.add(a,x);
}