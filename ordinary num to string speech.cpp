#include<stdio.h>
int main()
{
	printf("\t\tStudent Name:P.Revathi");
	printf("\n\t\tID Number   :S170286\n");
	char a[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char b[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char c[10][10]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","hundred"};
	int n,i;
	printf("enter the ordinary number:");
	scanf("%d",&n);
	if(n>10000)
	{
		printf("please enter the number less than ten thousand");
	}
	else
	{
	if(n>=1000)
	{
		i=n/1000;
		printf("%s thousand ",a[i]);
		n=n%1000;
	}
	if(n>100)
	{
		i=n/100;
		printf("%s hundred and ",a[i]);
	    n=n%100;
	}
	if(n>=10&&n<20)
	{
	    i=n%10;
	    printf("%s",b[i]);
	}
	if(n>19&&n<=100)
	{
		i=n/10;
		printf("%s",c[i-1]);
		n=n%10;
	}
	if(n>=1&&n<10)
	{
		printf(" %s",a[n]);
	}
}
}
