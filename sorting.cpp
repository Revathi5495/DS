#include<iostream>
using namespace std;
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
int a[20],i,n,temp,j;
cout<<"enter how many elements you want sort:";
cin>>n;
for(i=0;i<n;i++)
{
    cout<<"a["<<i<<"]=";
    cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{ 
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}	
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
   {
  	cout<<a[i]<<" ";
  }
  return 0;
}
