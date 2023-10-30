#include<iostream>
using namespace std;
class base
{
	public:
		int n,rev=0,num,digit;
		void input()
	{	
		cout<<"enter number";
		cin>>n;
	}
		void display()
		{
			n=num;
			while(n!=0)	
			{
				digit=num%10;
				rev=(rev*10)+digit;
				num=num/10;
			}
		}
		void data()
		{
			if(n==rev)
			{
				cout<<"palindrome";
			}
			else
			{
				cout<<"not a palindrome";
			}
		}
			
};
int main()
{
	base obj;
	obj.input();
	obj.display();
	obj.data();
}
