#include<iostream>
using namespace std;
class copy
{
	private:
		int x,n,sum;
	public:
		double calculate();
		copy(int a,int b)
		{
			x=a;
			n=b;
		}
};
double copy::calculate()
{
	int nxt,sum=0;
	nxt=x;
	for(int i=1;i<=n;i++)
	{
		sum=sum+nxt;
		nxt=nxt*x;
	}
	return sum;
}
int main()
{
	int x,n;
	cout<<"enter value of x & n";
	cin>>x>>n;
	copy obj(x,n);
	copy cpy=obj;
	cout<<"fibo series is"<<cpy.calculate();
}
