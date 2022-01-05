# include <iostream>
using namespace std;
class num
{
 private :
 int a,b,c,d;
 public :
 void input(void);
 void show(void);
 num operator+(num);
};
void num :: input( )
{
 cout <<"\n Enter Values for a,b,c and d : ";
 cin >>a>> b>>c>>d;
}
void num :: show( )
{
 cout <<" A= "<<a <<" B= " <<b <<" C = "<<c <<" D = "<<d <<"\n";
}
num num :: operator +(num t)
{
 num tmp;
 tmp.a=a+t.a;
 tmp.b=b+t.b;
 tmp.c=c+t.c;
 tmp.d=d+t.d;
 return (tmp);
}
main( )
{
 num X,Y,Z;
 cout <<"\n Object X";
 X.input( );
 cout <<"\n Object Y";
 Y.input( );
 Z=X+Y;
 cout <<"\nX : ";
 X.show( );
 cout <<"Y : ";
 Y.show( );
 cout <<"Z : ";
 Z.show( );
return 0;
}

