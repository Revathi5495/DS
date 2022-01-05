#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		int b;

};
class B:public A
{
public:
   B(int k)
	{
		b=k;
		cout<<"constructor excuted\n";
	}
	void show()
	{
		cout<<"b="<<b;
	}
};	

int main()
{
	B b(5);
	b.show();
	}
