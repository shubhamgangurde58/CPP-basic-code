#include<iostream>
using namespace std;

class Base{
	public:
		
		void show(){
			
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
	
	Derived obj;
	obj.show();
	obj.display();
}