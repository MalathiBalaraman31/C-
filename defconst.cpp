#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample()
		{
			a=10;
			b=20;
			cout<<"im constructor";
		}
	void display()
	{
		if(a<b)
		{
			cout<<"a<b";
		}
		else if(a>b)
		{
			cout<<"a>b";
		}
		else
		{
			cout<<"a=b";
		}
	}
};
int main()
{
	sample object();
	object.display();
}
