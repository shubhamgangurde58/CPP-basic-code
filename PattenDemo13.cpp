#include<iostream>
using namespace::std;
int main(){
	
	int n=5;
	for(int i=1;i<=n;i++){
		
		for(int j=n;j>=1;j--){
			
			if(j>i){
				
					cout<<"  ";
			}else{
				
				cout<<j<<" ";
			}
		
		}
		for(int j=2;j<=i;j++){
			
			cout<<j<<" ";
		}
	
		cout<<endl;
	}
	return 0;
}