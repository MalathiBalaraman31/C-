#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char name[20],des[20];
		void get()
		{
			cout<<"enter emp no";
			cin>>eno;
			cout<<"enter name";
			cin>>name;
			cout<<"enter des";
			cin>>des;
		}
};
class salary:public emp
{
	float bp,hr,da,pf,np;
	public:
		void get1()
		{
			cout<<"enter basic pay";
			cin>>bp;
			cout<<"enter human resource allwoance";
			cin>>hr;
			cout<<"enter food allowance";
			cin>>da;
			cout<<"enter profitablity fund";
			cin>>pf;
		}
		void calculate()
		{
			np=bp+hr+da-pf;
		}
		void display()
		{
			cout<<eno<<"\t"<<name<<"\t"<<des<<"\t"<<bp<<"\t"<<hr<<"\t"<<pf<<"\t"<<np;
		}
};
int main()
{
	int i,n;
	salary s[10];
	cout<<"enter no of employee";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		s[i].get1();
		s[i].calculate();
	}
	cout<<"\n eno \t ename \t des \t bp \t hra \t da \t pt \t np \n";
	for (i=0;i<n;i++)
	{
		s[i].display();
	}
}
