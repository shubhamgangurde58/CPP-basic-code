#include<iostream>
using namespace::std;
int main(){
	
	// 0-1 Triangle
	
	int n=5;
	int sum=0;
	for(int i=0;i<=n;i++){
		
		for(int j=0;j<=i;j++){
			
			 if((i+j)% 2 == 0){
			 	
			 	cout<<"0 ";
			 	
			 }else{
			 	
			 	cout<<"1 ";
			 }
		
			
		}
		cout<<endl;
		
	}
	return 0;
}