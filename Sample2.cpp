#include<iostream>
using namespace::std;
class Sample1{
	
		public :
		
			void add(int x,int y){
				
				cout<<"Subtrac="<<x-y;
			}
};
int main(){
	Sample1 obj;
	obj.add(10,20);
}