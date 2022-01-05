# include <iostream>
using namespace std;
 class A
 {
 int c;
 public :
 void add (int a,int b) const
 {
 int c=a+b; 
cout <<"a+b = "<<c ;
 c+=2;
 cout <<"b = "<<c ;
 }
};
 int main()
 {
 A a;
 A b;
 a .add(5,7);
 b .add(6,7);
 return 0;
}

