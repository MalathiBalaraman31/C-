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
	double calculate()
	{
		fact=1;
		for(i=1;i<n;i++)
		{
			fact=fact*i;
		}
		return fact;
	}	
};
int main()
{
	int n;
	cout<<"\n enter number";
	cin>>n;
	copy obj();
	copy cpy=obj;
	cout<<"\n"<<n<<"factorial is "<<
}
