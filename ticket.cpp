#include<iostream>
using namespace std;
class reservation
{
	public:
		char name[50];
		int id;
	public:
		void getdata()
		{
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter pass id:\n";
			cin>>id;
		}
	
};
class ticket
{
	public:
		char start[50];
		char end[50];
		public:
			void getdata2()
			{
				cout<<"enter start destination\n";
				cin>>start;
				cout<<"enter end destination\n";
				cin>>end;
			}
			
};
class result:public reservation ,public ticket
{
	public:
		int amt;
	public:
		
		void setdata()
		{
			cout<<"enter amount\n";
			cin>>amt;
		}
	    
	    void setdisplay()
	    {
	    	cout<<"Name:"<<name<<"/n"<<"Pass id:"<<id<<"/n"<<"Start destination"<<start<<"/n"<<"End destination:"<<end<<"/n"<<"Amount"<<"/n"<<amt;
		}
};
int main()
{
	result obj;
	obj.getdata();
	obj.getdata2();
	obj.setdata();
	obj.setdisplay();
}
