#include<iostream>
using namespace std;
class Rectangle{
	int length;
	int wigth;
	
	public:
	Rectangle(int x,int y){
		length = x;
		wigth = y;
	}
	
	void area(){
		
		int c = length * wigth;
		cout<<"Area ="<<c<<endl;
	}
	
};
int main(){
	Rectangle obj(10,10);
	obj.area();
	return 0;
}