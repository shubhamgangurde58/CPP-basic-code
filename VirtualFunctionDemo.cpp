#include<iostream>
using namespace std;

class Base{
	public:
		
		virtual void show(){
			
			cout<<"show of Base:"<<endl;
		}
		void display(){
			
			cout<<"display of Base"<<endl;
		}	
};
class Derived: public Base{
	
		public:
		void show(){
			
			cout<<"show of Derived:"<<endl;
		}
		void display(){
			
			cout<<"display of Derived"<<endl;
		}	
};

int main(){
	
	Base *objB;

	Derived objD;
	objB = &objD;
	
	objB->show();
	objB->display();
	
//	objD.show();
//	objD.display();
	return 0;
}