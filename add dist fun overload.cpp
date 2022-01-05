//Write a main function to create objects of DISTANCE class. Input two distances and output the sum. 
#include<iostream>
using namespace std;
class DISTANCE
{ 
public:
	float feets;
	float inches;
	float t;
	int k;
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
		k=(int)t;
	}
};
	void sum(DISTANCE d1,DISTANCE d2)
	{
		float distance;
		distance=d1.t+d2.t;
		cout<<"\ntotal distance:"<<distance;
	}
	void sum(DISTANCE d1,DISTANCE d2,int d)
	{
		d=d1.k+d2.k;
		cout<<"\ntotal distance(neglected float points):"<<d;
	}
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
	int dist;
	DISTANCE d1,d2;
	d1.input();
		d1.output();
	d2.input();
	   	d2.output();
	sum(d1,d2);
	sum(d1,d2,dist);
}
