#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0;
	cout<<"enter a no\n";
	cin>>n;
	while(n>0)
	{
		rev=n%10;
		rem=rem*10+rev;
		n=n/10;
	}
	if(n==rev)
	{
		cout<<"number is palindrome ";
	}
	else
	{
		cout<<"it is not a palindrome";
	}
}
