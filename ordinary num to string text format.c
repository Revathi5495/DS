#include<stdio.h>
int main()
{
	printf("\t\tStudent Name:P.Revathi");
	printf("\n\t\tID Number   :S170286\n");
	int n,rev,t,c=0;
	printf("enter the ordinary number:");
	scanf("%d",&n);
	rev=0;
	t=n;
    while(n!=0)
    {
        if(n%10==0)
		{
			c++;
			}	
    	rev=rev*10+n%10;
      	n=n/10;
    }
   n=rev;
   printf("the given ordinary number in string format \n");
   while(n!=0)
   {
   	switch(n%10)
   	{
   	 case 1:
   	 	printf(" one ");
   	 	break;
   	 case 2:
   	 	printf(" two ");
   	    break;
   	 case 3:
   	 	printf(" three ");
   	 	break;
   	 case 4:
   	 	printf(" four ");
   	 	break;
	 case 5:
   	 	printf(" five ");
   	 	break; 
	 case 6:
	 	printf(" six ");
   	 	break;
     case 7:
	 	printf(" seven ");
   	 	break;	
   	 case 8:
   	 	printf(" eight ");
   	 	break;
   	 case 9:
   	 	printf(" nine ");
   	 	break;
   	 case 0:
   	    printf(" zero ");
   	 	break;
	   }
	n=n/10;
   }
   	while(c)
   	{
    printf(" zero ");
    c--;
	   }
   }
