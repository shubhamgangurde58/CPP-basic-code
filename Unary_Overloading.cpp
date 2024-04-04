#include<iostream>
using namespace std;
class Unary{
	int a;
	int b;
	public:
		Unary(int x,int y){
			a=x;
			b=y;
		}
	
		void show(){
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
		
		void operator -()
		{
			a=-a;
			b=-b;
		}
		
		
};
int main(){
	Unary obj(-10,20);
	-obj;
	obj.show();
	
	return 0;
}