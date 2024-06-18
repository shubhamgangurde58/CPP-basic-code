#include<iostream>
using namespace std;
int main(){
	
	int n=5;
	int alpha=65;
	
	for(int i=0;i<=5;i++)
	{
		for(int j=5;j>=0;j--)
		{
			
			if(j<=i){
				
				cout<<(char)(alpha+i)<<" ";
			}else{
				
				cout<<" ";
			}	
		}
		cout<<"\n";
	}
	return 0;
}