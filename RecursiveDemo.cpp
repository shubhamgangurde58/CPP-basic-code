#include<iostream>
using namespace std;

int factorial(int num){
	
	if(num<=1){
		return 1;
	}else{
		return	num * factorial(num-1);
	}
}
int main(){
	int num;
	cout<<"Enter the any no:"<<endl;
	cin>>num;
	
	int fact = factorial(num);
	cout<<"A factorial of "<<num<<"is"<<fact<<endl;
	
	
	return 0;
}