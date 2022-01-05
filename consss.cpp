# include <iostream>
using namespace std;
class num
{
 private:
 int a,b,c;
 public:
 num(void)
 {
 cout <<"\n Constructor called";
 cout <<"\n Enter Values for a,b and c : ";
 cin >> a>>b>>c;
 }// declaration of constructor
 void show( )
 { cout <<"\n"<<" a= " <<a <<" b= "<<b <<" c= "<<c; }
};
 
main( )
{
 class num x;
 x.show( );
 return 0;
}

