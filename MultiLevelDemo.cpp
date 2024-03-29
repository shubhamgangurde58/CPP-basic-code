#include<iostream>
using namespace std;

class BaseDemo{
	
	public:
		
		void add(int a,int b){
			int c = a+b;
			cout<<"Addition="<<c<<endl;
		}		
};
class SubDemo: public BaseDemo{
	
	public:
	void multi(int a,int b){
		int c = a*b;
		cout<<"Multipication="<<c<<endl;
	}
};
class DriveDemo : public SubDemo{
	public:
			void sub(int a,int b){
			int c= a-b;
			cout<<"Subtraction="<<c<<endl;
		}
};

int main(){
	int a = 20;
	int b = 5;
	DriveDemo obj;
	obj.add(a,b);
	obj.multi(a,b);
	obj.sub(a,b);
	
	
}