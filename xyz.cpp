#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
char name[20],des[20];
void get( )
{
cout<<”Enter the employee no:”;
cin>>eno;
cout<<”Enter the employee name:”;
cin>>name;
cout<<”Enter the designation:”;
cin>>des;
}
};
class salary:public emp
{
	float bp,hra,da,pf,np;
	public:
		void get1( )
		{
		cout<<”Enter the basic pay:”;
		cin>>bp;
		cout<<”Enter the Human Resource Allowance:”;
		cin>>hra;
		cout<<”Enter the food allowance:”;
		cin>>da;
		cout<<”Enter the Profitability Fund:”;
		cin>>pf;
		}
		void calculate( )
		{
		np=bp+hra+da-pf;
		}
		void display( )
{
cout<<eno<<”\t”<<name<<”\t”<<des<<”\t”<<bp<<“\t”<<hra<<”\t”<<da<<”\t”<<pf<<”\t”<<np<<”\n”;
}
};
void main( )
{
int i,n;
salary s[10];
clrscr( );
cout<<”Enter the number of employee:”;
cin>>n;
for(i=0;i<n;i++)
{
s[i].get( );
s[i].get1( );
s[i].calculate( );
}
cout<<”\n eno \t ename \t des \t bp \t hra \t da \t pf  \t np \n”;
for(i=0;i<n;i++)
{
s[i].display( );
}
getch();
}
