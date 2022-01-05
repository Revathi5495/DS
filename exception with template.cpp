#include<iostream>
using namespace std;
template<class t>
void num(int k)
{
	try{
       if(k=0) throw 0;
       if(k>0)  throw 'q';
       if(k<0)  throw 1.2;
}
catch(t k) 
{
	cout<<"exception caught";
}
}
int main()
{
num(1);
num(0);
num(-1);	
}
