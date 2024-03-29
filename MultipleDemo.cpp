#include<iostream>
using namespace std;

class SuperDemo1{
	
	public:
	void add(int a,int b){
			int c = a+b;
			cout<<"Addition="<<c<<endl;
		}
};

class SuperDemo2{
	
	public:
	void sub(int a,int b){
		int c = a-b;
		cout<<"subtraction="<<c<<endl;
	}
};

class SubDemo :public SuperDemo1, public SuperDemo2{
	

};

int main(){
	int a = 10;
	int b = 5;
	SubDemo obj;
	obj.add(a,b);
	obj.sub(a,b);

return 0;	
}