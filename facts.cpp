#include<iostream>
using namespace std;
class factorial
{
	public:
		int num;
		void get()
		{
			cout<<"enter num:";
			cin>>num;
		}
};
class series:public factorial
{
	public:
		int fact=1,i;
		int input()
		{

			for(i=1;i<=num;i++)
			{
				fact=fact*i;
			}
		}	
		int display()
		{
				cout<<"factorial:"<<fact;
		}
};
int main()
{
	series obj;
	obj.get();
	obj.input();
	obj.display();
}
