#include<iostream>
using namespace std;
class restaurant
{
	char restname[50];
	public:
		void getdata()
		{
			cout<<"enter restaurant name ";
			cin>>restname;
		}
};
class special:public restaurant
{
	char food[100];
	public:
		void getdata1()
		{
			cout<<"enter special food";
			cin>>food;
		}
};
class total:public special
{
	int amount;
	public:
		void setdata()
		{
			cout<<"enter amount:";
			cin>>amount;
		}
		void display()
		{
			cout<<"restaurant name:"<<
		}
};
int main()
{
	total obj;
	obj.
}
