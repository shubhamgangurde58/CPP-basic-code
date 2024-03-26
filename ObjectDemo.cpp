#include<iostream>
using namespace std;

class ObjectDemo{
	
		public:
			
		void add(int a,int b){
			int c = a+b;
			cout<<"\nAddition="<<c;
		}
		void sub(int a,int b){
			int c = a-b;
			cout<<"\nSubtraction="<<c;
		}
};

int main(){
	int a=100;
	int b=30;
	ObjectDemo obj1; 
	obj1.add(a,b);
	obj1.sub(a,b);
}
 