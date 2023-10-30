#include<iostream>
using namespace std;
class bank
{
	char name;
	int accno,amt,bal;
	public:
		bank()
		{
			bal=500;
			cout<<"enter customer name";
			cin>>name;
			cout<<"enter acc no";
			cin>>accno;
			cout<<"enter amount";
			cin>>amt;
		}
	void deposit()
	{
		bal+=amt;
	}
	
	int getbal()
	{
		return bal;
	}
};
int main()
{
	bank a;
	a.deposit();
	cout<<"balance"<<a.getbal();
}
