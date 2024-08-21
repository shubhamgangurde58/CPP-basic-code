#include<iostream>
using namespace::std;
class RecursionDemo4{
	
	public:
		
		void printFibonacci(int n,int a,int b){
			
			if(n==0){
				return;
			}
			int fibo = a+b;
			
			cout<<fibo<<endl;
			
			printFibonacci(n-1,b,fibo);
			
		}
		
};

int main(){
	
	int a=0;
	int b=1;
	int n=0;
	cout<<"Enter the level no:";
	cin>>n;
	cout<<a<<"\n"<<b<<endl;
	
	RecursionDemo4 obj;
	obj.printFibonacci(n-2,a,b);
	return 0;
}