//Write a main function to create objects of DISTANCE class. Input two distances and output the sum. 
#include<iostream>
using namespace std;
class DISTANCE
{ 
public:
	float feets;
	float inches;
	float t;
    void input()
	{
		cout<<"\nenter the number of feets:";
		cin>>feets;
		cout<<"enter the number of inches:";
		cin>>inches;
		t=feets+inches/12;
	}
	void output()
	{
		cout<<"total distance in feets:"<<t;
	}
};
	void sum(DISTANCE d1,DISTANCE d2)
	{
		int distance;
		distance=d1.t+d2.t;
		cout<<"\ntotal distance:"<<distance<<"(in feets)";
	}
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	DISTANCE d1,d2;
	d1.input();
		d1.output();
	d2.input();
	   	d2.output();
	sum(d1,d2);
}
