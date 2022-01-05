// Write a program illustrates the use of default arguments for simple interest function. 
#include<iostream>
using namespace std;
int interest(float a,float b,float c)
{
	int I;
	I=a*b*c;
	return I;
}
int main()
{
	float p,t,r,r1,SI;
	cout<<"enter principle amount:";
	cin>>p;
	cout<<"enter the rate of annual interest:";
	cin>>r;
	r1=r/100;
    cout<<"enter the time period:";
	cin>>t;
    SI=p+interest(p,r1,t);
    cout<<"simple interest:"<<SI;
	return 0;
}
