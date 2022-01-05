#include<stdio.h>
int main()
{
	printf("\t\tStudent Name:P.Revathi");
	printf("\n\t\tID Number   :S170286\n");
	int n;
	printf("enter the ordinary number:");
	scanf("%d",&n);

	while(n>=1000)
	{
		printf("M");
		n-=1000;
	}
	if(n>=500)
	{
		printf("D");
		n-=500;
	}
	while(n>=100)
	{
		printf("C");
		n-=100;
	}
	if(n>=50)
	{
     	printf("L");
    	n-=50;	
	}
    while(n>=10)
    {
    	printf("X");
        n-=10;
	}
	if(n>=9)
	{
		printf("IX");
		n-=9;
	}
	if(n>=5)
	{
		printf("V");
		n-=5;
	}
	if(n>=4)
	{
		printf("IV");
		n-=4;
	}
	while(n>=1)
	{
		printf("I");
		n-=1;
	}
}
