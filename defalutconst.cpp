#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
		example()
		{
			a=10;
			b=20;
			cout<<"Im constructor\n";
		}
	void display()
	{
		cout<<"values\n"<<a<<"\t"<<b;	
	}	
};
int main()
{
	example object;
	object.display();
	return 0;
}
