#include<iostream>
using namespace std;
template<class t1,class t2>
int pow(t1 n,t2 e)
{
	if(e==0)
	{
		return 1;
	}
	else
	{
		return n*pow(n,e-1);
	}
}
int main()
{
	int n,e,result;
cout<<"enter the number(base):";
cin>>n;
cout<<"enter the exponent:";
cin>>e;
result=pow(n,e);
cout<<n<<"^"<<e<<"="<<result;
}
