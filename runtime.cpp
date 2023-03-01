#include<iostream>
using namespace std;

class Base
{
	public :
		int A,B;	
		void fun()
		{
			cout<<"base fun\n";
		}
		void gun(int i)
		{
			cout<<"base gun one integer\n";
		}
		void gun(int i , int j)
		{
			cout<<"base gun two integer\n";
		}
};
class Derived : public Base
{
	public :
		int x,y;
		void sun()
		{
			cout<<"derived sun\n";
		}
		void fun(int i)
		{
			cout<<"derived fun\n";
		}
};
int main()
{
	Derived dobj;
	dobj.Base::fun();
	dobj.gun(11);
	dobj.gun(11,21);
	dobj.sun();

	return 0;
}