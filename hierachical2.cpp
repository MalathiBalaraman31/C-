#include<iostream>
using namespace std;
class number
{
	private:
		int num;
	public:
		void getnumber(void)
		{
			cout<<"enter a integer:";
			cin>>num;
		}
		int returnnumber(void)
		{
			return num;
		}
};
class square:public number
{
	public:
		int getsquare(void)
		{
			int num,sqr;
			num=returnnumber();
			sqr=num*num;
			return sqr;
		}
};
class cube:public number
{
	public:
		int getcube(void)
		{
			int num,cube;
			num=returnnumber();
			cube=num*num*num;
			return cube;
		}
};
int main()
{
	square objs;
	cube objc;
	int sqr,cube;
	objs.getnumber();
	sqr=objs.getsquare();
	cout<<"square of "<<objs.returnnumber()<<"is:"<<sqr;
	objc.getnumber();
	cube=objc.getcube();
	cout<<"cube of"<<objs.returnnumber()<<"is:"<<cube;
}
