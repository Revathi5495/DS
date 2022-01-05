// Write a program to illustrate Storage classes 
#include<iostream>
using namespace std;
void display(int a,int b,int c,int d)
 {
   cout<<"extern a="<<a;
   cout<<"auto b="<<b;
   cout<<"static c="<<c;
   cout<<"register d="<<d;
 }
int main()
{
	printf("ID NO:S170286\nName:P.REVATHI\nClass:CSE-1E\n");
 extern int a;
   cout<<"extern a="<<a;
   auto int b;
   cout<<"auto b="<<b;
   static int c;
   cout<<"static c="<<c;
   register int d;
   cout<<"register d="<<d;
   display(a,b,c,d);
} 
 
