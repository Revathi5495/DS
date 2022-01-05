#include<iostream>
using namespace std;
template<class t>
void num(t n)
{
	n++;
	cout<<"\n now the number  "<<n;
}
int main()
{
	int i=5;
	float f=3.14;
	num(i);
	num(f);
}
