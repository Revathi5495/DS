#include<stdio.h>
int main()
{
	printf("\t\tStudent Name:P.Revathi");
	printf("\n\t\tID Number   :S170286\n");
 char a[10];
 int i,num=0;
	printf("please enter the roman numeral in CAPITAL letters :");
    gets(a);
    while(a[i]!='\0')
    {
    	switch(a[i])
        {
		case 'M':                  /*i may give condition to convert  "IM"  roman numeral into decimal but it is not a valid numeral 
	                             because of  we don't put high value previous low value roman numeral but for rectify the logical error i gave that condition also*/
	    {                  
			if(a[i-1]=='C')
			{
				num+=800;
			}
			else if(a[i-1]=='X')
			{
				num+=980;
			}
			else if(a[i-1]=='I')
			{
				num+=998;
			}
			else
			{
			num+=1000;
	    	}
			break;
		}
	    case 'D':
		{
			if(a[i-1]=='C')
			{
				num+=300;
			}
			else if(a[i-1]=='X')
			{
				num+=980;
			}
			else if(a[i-1]=='I')
			{
				num+=498;
			}
			else
			{
			num+=500;
	    	}
			break;
		}
		case 'C':
		{
		    if(a[i-1]=='X')
			{
				num+=80;
			}
			if(a[i-1]=='I')
			{
				num+=98;
			}
			else
			{
			num+=100;
	    	}
			break;
		}
		case 'L':
		{
			if(a[i-1]=='X')
			{
				num+=30;
			}
			if(a[i-1]=='I')
			{
				num+=48;
			}
			else
			{
			num+=50;
	    	}
			break;
		}
		case 'X':
		{
			if(a[i-1]=='I')
			{
				num+=8;
			}
			else
			{
			num+=10;
		    }
			break;	
		}
		case 'V':
		{
			if(a[i-1]=='I')
			{
				num+=3;
			}
			else
			{
			num+=5;
		}
			break;
		}
	    case 'I':
		{ 
			num+=1;
			break;		
		}
		default:
			{
				printf("you entered INVALID roman number...");
				break;
			}
	}
		i++;
	}
	printf("corresponded decimal number is   %d",num);
}
