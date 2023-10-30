#include<iostream>
using namespace std;
class vote
{
	private:
		int age;
	public:
		void eligiblity()
		{
			cout<<"enter age:";
			cin>>age;
		}
		void display()
		{
			if(age>18)
			{
				cout<<"ELIGIBLE\n";
			}
			else
			{
				cout<<"NOT ELIGIBLE\n";
			}
		}
};
int main()
{
	vote obj;
	obj.eligiblity();
	obj.display();
}
