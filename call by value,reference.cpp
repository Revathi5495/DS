//Write a program to implement call by value and call by reference using reference variable. 
#include<iostream>
using namespace std;
int swapr(int &a,int &b)
{
	int temp;
	temp=a;
    a=b;
	b=temp;
}
int swapv(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	    printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	int a,b;
	cout<<"emter a,b values:";
	cin>>a>>b;
	cout<<"before swap "<<"a="<<a<<" b="<<b;
	swapv(a,b);
	cout<<"\nafte calling swap function using call by value "<<"a="<<a<<" b="<<b;
	swapr(a,b);
	cout<<"\nafter calling swap function using call by reference "<<"a="<<a<<" b="<<b;
	return 0;
}

