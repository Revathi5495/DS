//Write a program illustrating Inline Function 
#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
	 printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
    sum(a,b);
	return 0;
}
inline void sum(int a,int b)
{
	int c;
	c=a+b;
    cout<<"sum of given two numbers:"<<c;
}
