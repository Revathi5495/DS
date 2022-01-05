// Write a program illustrates the use of default arguments for simple interest function. 
#include<iostream>
using namespace std;
int interest(float a=500.0,float b=7.7,float c=7.5)
{
	int I;
	I=(a*b*c)/100;
	return a+I;
}
int main()
{  
     printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	float SI;
    SI=interest();
    cout<<"simple interest:"<<SI;
	return 0;
}
