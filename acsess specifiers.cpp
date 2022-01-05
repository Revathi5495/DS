//Write a program for illustrating Access Specifiers public, private, protected 
#include<iostream>
using namespace std;
class num
{
	private:
		int a;
	protected:
		int c;
	public:
		int b;
		void input()
		{
			cout<<"enter value of a:";
			cin>>a;
			cout<<"enter value of b:";
			cin>>b;
			cout<<"enter value of c:";
			cin>>c;
		}
		void show()
		{
			cout<<"a="<<a<<"  b="<<b<<"  c="<<c;
		}
	
};
int main()
{
  num obj;
  obj.input();
  obj.show();
  return 0;
}
