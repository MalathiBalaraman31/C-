#include<iostream>
using namespace std;
int main()
{
	int a,b,c,op;
	cout<<"enter a b c values :\n";
	cin>>a>>b;
	switch(op)
	{
		case 1:
			c=a+b;
			cout<<"add is:\n"<<c;
			break;
		case 2:
			c=a-b;
			cout<<"sub is :\n"<<c;
			break;
		case 3:
			c=a*b;
			cout<<"mul is :\n"<<c;
			break;
		default:
			cout<<"invalid value";
			break;		
	}
}
