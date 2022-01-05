//Write a main function to create objects of DISTANCE class. Input two distances and output the sum. 
#include<iostream>
using namespace std;
class DISTANCE
{ 
public:
	float feets;
	float inches;
	float t;
    DISTANCE()
	{
		cout<<"\nenter the number of feets:";
		cin>>feets;
		cout<<"enter the number of inches:";
		cin>>inches;
	}
	void output()
	{
		t=feets+inches/12;
		cout<<"total distance in feets:"<<t;
	}
	~DISTANCE()
	{
		cout<<"\ndestroyed object";
	}
};
	void sum(DISTANCE d1,DISTANCE d2)
	{
		float distance;
		distance=d1.t+d2.t;
		cout<<"\ntotal distance:"<<distance;
	}
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	DISTANCE d1;
		d1.output();
	DISTANCE d2;
	   	d2.output();
	sum(d1,d2);
}
