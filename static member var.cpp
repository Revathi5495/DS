# include <iostream>
using namespace std;
int c=11; // global variable
class bita
{
 static int c;
 public:
 	void display()
 	{
 		cout<<c;
	 }
};
int bita ::c=22; // class member variable
int main()
{
 int c=33; // local variable
cout<<"\nClass member c = "<<bita::c;
cout <<"\nGlobal variable c = "<<::c;
cout <<"\nLocal variable c = "<<c;
return 0;
}
