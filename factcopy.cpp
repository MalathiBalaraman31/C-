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
			for(i=1;i<=var;i++)
			{
				fact=fact*i;
			}
		}
};
int main()
{
	int n;
	cout<<"\nenter number";
	cin>>n;
	copy obj(n);
	copy cpy=obj;
	cout<<"\n\t"<<"factorial is"<<obj.calculate();
	cout<<"\n\t"<<"factorial is"<<cpy.calculate();	
}
