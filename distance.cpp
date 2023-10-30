#include<iostream>
#include<cmath>
using namespace std;
class distance 
{
	public:
		int x1,x2,y1,y2;
		void get()
		{
			cout<<"enter x1,x2,y1,y2";
			cin>>x1>>x2>>y1>>y2; 
		}
};
class formula:public distance
{
	public:
		int d;
		void setdata()
		{
			d=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
			cout<<"distance is:"<<sqrt(d);
		}
};
int main()
{
	formula obj;
	obj.get();
	obj.setdata();
}


















