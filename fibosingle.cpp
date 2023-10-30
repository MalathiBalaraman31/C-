#include<iostream>
using namespace std;
class series 
{
	protected:
	int a,b,t,j,num;
};
class child:public series
{
	public:
		int input()
		{
			a=0;
			b=1;
			cout<<"enter the number : "<<endl;
			cin>>num;
			cout<<"the fb series is : "<<a<<b;
		}
		public:
			int show()
			{
				for(j=3; j<=num; j++)
				{
					t=a+b;
					cout<<t;
					a=b;
					b=t;
				}
		   }  
	};
int main()
{
	child obj;
	obj.input();
	obj.show();
}
