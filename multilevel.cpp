#include<iostream>
using namespace std;

class Base
{
	public:
	int A,B;
	
	Base()
	{
		cout<<"inside base constructor\n";
	}
	~Base()
	{
		cout<<"inside base destructor\n";
	}
	void fun()
	{
		cout<<"inside base fun\n";
	}
	
};

class Derived : public Base
{
	public :
	int X,Y;
	
	Derived()
	{
		cout<<"inside derived constructor\n";
	}
	~Derived()
	{
		cout<<"inside derived destructor\n";
	}
	void gun()
	{
		cout<<"inside gun of derived\n";
	}
};

class DerivedX : public Derived
{
	public :
	 int i,j;
	 
	 DerivedX()
	 {
		 cout<<"inside DerivedX constructor\n";
	 }
	 ~DerivedX()
	 {
		 cout<<"inside derivedX destructor\n";
	 }
	 void sun()
	 {
		 cout<<"inside DeivedX sun\n";
	 }
};

int main()
{
    DerivedX * ptr = NULL;
	ptr = new DerivedX;
	
	ptr ->fun();
	ptr ->gun();
	ptr ->sun();
	
	delete ptr;

   return 0;
}