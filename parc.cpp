#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
		example(int x,int y)
		{
			a=x;
			b=y;
			cout<<"im constructor\n";
		}
	void display()
	{
		cout<<"values \t"<<a<<"\t"<<b;
	}
};
int main()
{
	example object(10,20);
	object.display();
	return 0;
}
