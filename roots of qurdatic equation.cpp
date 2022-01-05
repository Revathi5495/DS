#include<iostream>
#include<math.h>
using namespace std;
main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	float a,b,c,d,r1,r2;
	cout<<"Enter coefficients of quadratic equation(Format:ax^2+bx+c=0):";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{cout<<"The roots are real and unique\n";
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	cout<<"The roots of the equation are "<<r1<<" and "<<r2;	
    }
    else if(d==0)
    {cout<<"The roots are real and equal\n";
    r1=(-b+sqrt(d))/2*a;	
    cout<<"The roots of the equation are "<<r1<<" and "<<r1;
	}
	else
	cout<<"Real roots doesn't exist";
}
