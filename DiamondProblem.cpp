#include<iostream>
using namespace std;
class A{
	public:
		void func1(){
			cout<<"This function 1 is A class"<<endl;
		}
};

class B :public A{
	public:
		void func2(){
			cout<<"This function 2 is B class"<<endl;
		}
};

class C :public A{
	public :
		void func3(){
			cout<<"This function 3 is c class"<<endl;
		}
};

class D : public B,public C{
	public:
		void func4(){
			cout<<"This function 4 is D class"<<endl;
		}
};

int main()
{
	D d;
	d.func1();
	
	return 0;
	
}