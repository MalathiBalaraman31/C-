#include<iostream>
using namespace std;
class copy
{
	int var,fact,i;
	public:
		copy(int temp)
		{
			var=temp;
		}
	double calculate()
	{
		fact=1;
		for(i=0;i<=var;i++)
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
	copy obj(n);
	copy.cpy=obj;
	cout<<"\n factorial is"<<obj.calculate();
	cout<<"\n factorial is"<<cpy.calculate();

}
