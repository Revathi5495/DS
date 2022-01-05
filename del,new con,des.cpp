# include <iostream>
using namespace std;
int number (void);
class num
{
 int *x;
 int s;
 public :
 num( )
 {
 s=number();
 x= new int [s];
 }
 ~num( ) { delete x; }
 void input( );
 void sum( );
};
void num :: input( )
{
 for ( int h=0;h<s;h++)
 {
 cout <<"Enter number ["<<h+1<< "] : ";
 cin>>x[h];
 }
}
void num :: sum( )
{
int adi=0;
for ( int h=0;h<s;h++)
adi+=x[h];
cout <<" sum of elements = "<<adi;
}
number( )
{
 int n;
 cout <<" How many numbers : ";
cin>>n;
 return n;
}
int main( )
{
 num n1;
 n1.input( );
 n1.sum( );
}
