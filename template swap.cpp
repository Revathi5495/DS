#include<iostream>
using namespace std;
template<class t1,class t2>
int change(t1 &a,t2 &b)
{
int temp;
 temp=a;
 a=b;
 b=temp;
}
int main()
{
int a,b;
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"before swap a="<<a<<"  b="<<b;
change(a,b);
cout<<"\nafter swap a="<<a<<"  b="<<b;
}
