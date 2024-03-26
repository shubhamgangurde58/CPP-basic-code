#include<iostream>
using namespace std;

int main(){
	
	int a[2][2];
	int i,j;
	cout<<"Enter the element"<<endl;
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			
			cin>>a[i][j];
		}		
	}
	cout<<"The array Element"<<endl;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			cout<<a[i][j];
		}
		cout<<endl;
	}
}