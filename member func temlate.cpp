#include<iostream>
using namespace std;
template<class t1>
class num
{
	public:
	int a;
	int b;
	float c;
	float d;
	void input()
	{
		cout<<"enter the value a:";
		cin>>a;
			cout<<"enter the value b:";
		cin>>b;
			cout<<"enter the float value c:";
		cin>>c;
			cout<<"enter the float value d:";
		cin>>d;
		}	
	void sum(t1 x,t1 y)
	{
		cout<<"\nsum of that elements is "<<x+y;
	}
};
int main()
{ 
    int k,l;
	float m,n; 
	num <int>v;
	v.input();
	k=v.a;l=v.b;m=v.c;n=v.d;
	cout<<m;
	v.sum(k,l);
	v.sum(m,n);//in this the integer sum will be given. becoz the object is declared as integer template argument
}
