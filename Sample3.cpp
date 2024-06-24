#include<iostream>
using namespace::std;
class Sample3{
	
		public :
		
			void add(int x,int y){
				
				cout<<"Division="<<x/y;
			}
};
int main(){
	Sample3 obj;
	obj.add(20,5);
}