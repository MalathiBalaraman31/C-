#include<iostream>
using namespace std;
class mark
{
	int sci,soc,maths,tam,eng;
	public:
		mark()
		{
			sci=90;
			soc=95;
			maths=80;
			tam=78;
			eng=87;
		}
	void display()
	{
		cout<<"sci marks"<<sci;
		cout<<"soc marks"<<soc;
		cout<<"maths marks"<<maths;
		cout<<"tam marks"<<tam;
		cout<<"eng marks"<<eng;
	}
};
int main()
{
	mark obj;
	obj.display();
}
