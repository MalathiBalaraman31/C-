#include<iostream>
using namespace std;
class home
{
	public:
		int side,base,height,radius;
	
		void square()
		{
			int side;
			cout<<"enter side ";
			cin>>side;
			cout<<"enter base and height";
			cin>>base>>height;
			cout<<"enter radius";
			cin>>radius;
		}
};
class base:public home
{
	public:
			int area,area1,area2;
        void sqarea()
		{
			area=side*side;
			area1=base*height;
			area2=3.14*radius*radius;
			cout<<"area is"<<area;
			cout<<"area1 is "<<area1;
			cout<<"area2 is"<<area2;
		}	
};		
int main()
{
	base obj;
	obj.square();
	obj.sqarea();
	
}
