#include<iostream>
using namespace std;

class test{
		int n;
		public:
			
		test(){
			 
			 n = 10;
			 cout<<n<<endl;
			 
		}
		
		~test()
		{
			
			cout<<"object are distroyed "<<endl;
			
		}	
};

int main()
{	
	test obj,obj2;	
	return 0;
}