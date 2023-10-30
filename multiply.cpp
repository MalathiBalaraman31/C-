#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		void set(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"value of A =\t"<<a;
		}
};
class B:public A
{
	int b,p;
	public:
		void setdata(int x,int y)
		{
			set(x);
			b=y;
		}
		void displaydata()
		{
			display();
			cout<<"value of B =\n"<<b;
		}
		void calculate()
		{
			p=a*b;
			cout<<"product of "<<a<<"*"<<b<<"="<<p;
		}
};
int main()
{
	B z;
	z.setdata(4,5);
	z.displaydata();
	z.calculate();
}
