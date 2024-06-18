#include<iostream>
using namespace std;
int main(){
	
	int n=5;
	
	for(int i=0;i<=5;i++)
	{
		for(int j=5;j>=0;j--)
		{
			
			if(j<=i){
				
				cout<<i<<" ";
			}else{
				
				cout<<" ";
			}	
		}
		cout<<"\n";
	}
	return 0;
}