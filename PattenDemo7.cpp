#include<iostream>
using namespace::std;
int main(){
	
	//inverted half pyramid with number;
	int n=5;
	
	for(int i=0;i<=n;i++){
		
		for(int j=1;j<=n-i;j++){
			
			cout<<" "<<j;
		}
		cout<<endl;
	}
	return 0;
}