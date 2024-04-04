#include<iostream>
using namespace std;
class UnaryDemo{
	int a;
	int b;
	public:
		UnaryDemo(int x,int y){
			a=x;
			b=y;
		}
		
		void show(){
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
		
		friend void operator -(UnaryDemo &obj);
};
void operator - (UnaryDemo &obj){
	obj.a = -obj.a;
	obj.b = -obj.b;
}
int main(){
	UnaryDemo obj(-10,20),t(-100,200);
	obj.show();
	t.show();
	-obj;  -t;
 	t.show();
 	obj.show();
 	
	return 0;
}