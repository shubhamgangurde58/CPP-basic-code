#include<iostream>
using namespace std;

class Sample{
	
	private:
		int a;
		int b;
	public:
		void value(int x,int y){
			a = x;
			b = y;
		}
		friend void add(Sample s1);
};

void add(Sample s1){
	int sum = s1.a + s1.b;
	cout<<"Addition="<<sum;
}
int main(){
	
	Sample obj;
	obj.value(50,100);
	
	add(obj);
	return 0;
}