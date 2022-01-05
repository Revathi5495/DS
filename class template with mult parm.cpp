#include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class t
{
	public:
	t(t1 a,t2 b,t3 c)
	{
		cout<<"a="<<a<<" size of a="<<sizeof(a);
		cout<<"\nb="<<b<<" size of b="<<sizeof(b);
		cout<<"\nc="<<c<<" size of c="<<sizeof(c);
	}
};
int main()
{
	t <int,float,char> x(5,1.3,'r');
}
