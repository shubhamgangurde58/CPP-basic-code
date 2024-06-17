#include<iostream>
using namespace std;
int main(){
	
	int alpha = 65;
	
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<(char)(alpha+j)<<" ";
		}
		
		cout<<"\n";
	}
	return 0;
}