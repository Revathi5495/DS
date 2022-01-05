# include <iostream>
using namespace std;
class B
{
 public:
 void show( )
 {
 cout <<"\n In base class function ";
 }
};
class D : public B
{
 public:
 void show( )
 {
 cout <<"\n In derived class function";
 }
};
int main( )
{
 B b; // b is object of base class
 D d; // d is object of derived class
 b.show( ); // Invokes Base class function
 d.show( ); // Invokes Derived class function
 d.B::show( ); // Invokes Base class function
 return 0;
}

