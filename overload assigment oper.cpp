#include<iostream>
using namespace std;
class num
{
	public:
	int a;
	num(int k)
	{
		a=k;
	}
	void show()
	{
		cout<<"a="<<a;
	}
	void operator =(a);
};
void num::operator =(int a)
{
	int i;
	i=a;
	return i;
}
int main()
{
	num x(5);
	int y;
	y=x;
	cout<<"y="<<y;
	
	
}
