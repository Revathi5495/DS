// Write a program to illustrate scope resolution, new and delete Operators. 
#include<iostream>
using namespace std;
int a=30;
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
    int a;
	cout<<"local value:"<<a;
	cout<<"\nglobel value:"<<::a;
	cout<<"\ndynamic memory allocation:";
	int *p;
    try
    {
        p = new int;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure \n";
    }
    *p = 100;
    cout << "\nAt " << p << " ";
    cout << "is the value " << *p << "\n";
    delete p;
    cout<<p;
	return 0;
}

