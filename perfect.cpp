//Perfect number:A number whose sum of factors is equal to the number itself is called perfect number e.g 6(1+2+3) or 28(1+2+4+7+14)
#include<iostream>
using namespace std;
class number
{
    protected:
	    int num,i,st,end,sum;
    public:
     void in()
     {
     	cout<<"Enter starting number=";
     	cin>>st;
     	cout<<"Enter ending ending number=";
     	cin>>end;
	 }
};
class perfect:public number
{
    public:
	 void disp()
    {
	 	for(num=st;num<=end;num++)
	{
		i=1;
		sum=0;
		while(i<num)
		{
			if(num%i==0)
			sum=sum+i;
			i++;
		}
		if(sum==num)
		cout<<"The perfect number within the given range="<<num<<endl;
    }	
    } 
};	
int main()
{
	perfect obj;
	obj.in();
	obj.disp();
	
}
