#include<iostream>
using namespace::std;
int main(){
	
	int n=7;
	
	for(int i=0;i<n;i++){
		
		for(int j=n;j>i;j--){
			
			cout<<" ";
		}
		for(int j=0;j<=n;j++){
			
			if(j<=i){
				
				cout<<"*"<<" ";
			}
		}
		cout<<endl;
	}
	
	
	for(int i=n;i>=0;i--){
		
		for(int j=n;j>i;j--){
			
			cout<<" ";
		}
		for(int j=0;j<=n;j++){
			
			if(j<=i){
				
				cout<<"*"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}