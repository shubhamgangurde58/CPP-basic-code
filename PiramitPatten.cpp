#include<iostream>
using namespace std;
int main(){
	

	for(int i=0;i<=5;i++)
	{
		int num = 0;
			for(int j=5;j>=0;j--)
			{
				if(j<=i)
				{
					cout<<j<<"";
				}
				
					cout<<" ";		
			}
			
			cout<<"\n";
	}
	return 0;
}