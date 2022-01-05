//c) Write a C++ program illustrating factorial using recursion. 

#include<iostream>
using namespace std;
int fact(int n);
int main()
{  
    printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
    int n;
    cout<<"enter the number:";
    cin>>n;
	cout<<"factorial of "<<n<<"! is "<<fact(n);
 } 
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
