#include<iostream>
using namespace std;
class copy
{
	int var,fact;
	public:
		copy(int temp)
		{
		var=temp;
		}
		double calculate( )
		{
		fact=1;
		for(int i=1;i<=var;i++)
		{
		fact=fact*i;
		}
return fact;
	}
};
int main( )
{
int n;
cout<<"\n\t Enter the number:";
cin>>n;
copy obj();
copy cpy=obj;
cout<<"\n\t"<<n<<"Factorial is:"<<obj.calculate( );
cout<<"\n\t"<<n<<"Factorial is:"<<cpy.calculate( );
getch( );
}
