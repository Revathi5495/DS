#include<iostream>
using namespace std;
class num
{
	public:
	int a;
	int b;
	int c;
	int d;
	num(int k,int l,int m,int n)
	{
		a=k;
		b=l;
		c=m;
		d=n;
	}
    void show()
	{
		cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c<<"\nd="<<d;
		}
	void operator --();
};
void num::operator --()
{
	--a;--b;--c;--d;
}
int main()
{
	num x(5,10,15,20);
	printf("before decrement");
	x.show();
	--x;
	printf("\nafter decrement");
	x.show();
}
