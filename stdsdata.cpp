#include<iostream>
using namespace std;
class student
{
	int id;
	char name;
	public:
		void setdata()
		{
			cout<<"enter id\n";
			cin>>id;
			cout<<"enter name\n";
			cin>>name;
		}
		void display()
		{
			cout<<"id:\t"<<id<<"name:\t"<<name;
		}
};
class data:public student
{
	char coursename[50];
	int fee;
	public:
	void getdata()
	{
		setdata();
		cout<<"enter course name\n";
		cin>>coursename;
		cout<<"enter fee\n";
		cin>>fee;
	}
	void displaydata()
	{
		display();
		cout<<"course:\n"<<coursename<<"fees:\n"<<fee;
	}
};
int main()
{
	data s;
	s.getdata();
	s.displaydata();
}
