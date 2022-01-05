#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int *a,b=10;
	a=&b;
	cout<<"given numbers a="<<*&b<<"  b="<<*a;
	return 0;
}
