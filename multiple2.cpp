#include<iostream>
using namespace std;
class patient
{		
		char name[50];
		int contact;
	public:
		void patientdetails()
		{
			cout<<"enter patient name";
			cin>>name;
			cout<<"enter contact no";
			cin>>contact;
		}
};
class data
{
		char address;
		int dof;
	public:
		void data2()
		{
			cout<<"enter address:";
			cin>>address;
			cout<<"date of visit";
			cin>>dof;
		}
};
class disease:public patient public data
{
	char disease;
	public:
		void diseasedata()
		{
			cout<<"enter disease data";
			cin>>disease;
		}
		void display()
		{
			cout<<"disese:"<<disease;
		}
};
int main()
{
	disease obj;
	obj.patientdetails();
	obj.data();
	obj.diesasedata();
	obj.display();
}

