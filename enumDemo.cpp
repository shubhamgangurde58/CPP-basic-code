#include<iostream>
using namespace std;
int main()
{
	enum gender{
		male,female,other
	};
	
	cout<<male<<endl;
	gender str=other;
	cout<<str;
	return 0;
}