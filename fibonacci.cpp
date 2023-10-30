#include<iostream>
using namespace std;
int fibonacci(int i);
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<fibonacci(i);
	}}
 int fibonacci(int i)
{
 	if(i==0)
 	{
 		return 0;
	}
	if(i==1)
	{
		return 1;
	}
	return fibonacci(i-1)+fibonacci(i-2);
}

