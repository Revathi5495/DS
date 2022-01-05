 //Write a program illustrates function overloading. 
 #include<iostream>
 using namespace std;
void sum(int,int);
void sum(float,float);
int main()
{
	 printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	int a,b;
	float x,y;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	sum(a,b);
	cout<<"\nenter the float value of x:";
	cin>>x;
	cout<<"enter the float value of y:";
	cin>>y;
    sum(x,y);
	return 0;
}
 void sum(int a,int b)
{
	int c;
	c=a+b;
    cout<<"addition of given two numbers:"<<c;
}
 void sum(float x,float y)
{
	float z;
	z=x+y;
    cout<<"addition of given two numbers:"<<z;
}
