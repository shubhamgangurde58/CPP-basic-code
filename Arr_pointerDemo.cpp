#include<iostream>
using namespace std;
int main(){
	
		int a[6];
		int *ptr;
		int i;
		cout<<"Enter the element:";
		
		for(int i=0;i<6;i++){
			cin>>a[i];
		}
		
		for(i=0;i<6;i++){
			
			ptr[i]=a[i];
		}
		
		for(i=0;i<6;i++){
			
			cout<<"*ptr="<<ptr[i]<<endl;
		}
	
};



