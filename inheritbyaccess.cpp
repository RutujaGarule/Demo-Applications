#include<iostream>
using namespace std;

class Base
{
	public :
		int A;
	private :
		int B;
	protected :
		int C;
	public :
		Base()
		{
			cout<<"inside base constructor\n";
			A = 10;
			B = 20;
			C = 30;
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
class Derived : protected Base
{
	public :
		int X;
	private :
		int Y;
	protected :
		int Z;
	public :
		Derived()
		{
			cout<<"inside Derived constructor\n";
			X = 11;
			Y = 21;
			Z = 31;
		}
		~Derived()
		{
			cout<<"inside Derived destructor\n";
		}
		void gun()
		{
			cout<<"inside Derived gun\n";
			cout<<"value of A from base is : "<<A<<"\n";
			//cout<<"value of B from base is : "<<B<<"\n";      
			cout<<"value of C from base is : "<<C<<"\n";
		}
	
		
};
class DerivedX : public Derived
{
	public :
		int I;
	private :
		int J;
	protected :
		int K;
	public :
		DerivedX()
		{
			cout<<"inside DerivedX constructor\n";
			I = 1;
			J = 2;
			K = 3;
		}
		~DerivedX()
		{
			cout<<"inside DerivedX destructor\n";
		}
		void mun()
		{
			cout<<"inside DerivedX mun\n";
			cout<<"value of A from base is : "<<A<<"\n";
			//cout<<"value of B from base is : "<<B<<"\n";   
			cout<<"value of C from base is : "<<A<<"\n";
			cout<<"value of X from derived is : "<<X<<"\n";
			//cout<<"value of Y from derived is : "<<Y<<"\n";     
			cout<<"value of Z from derived is : "<<Z<<"\n";
		}
	
		
};
int main()
{
	DerivedX dobj;
	
	//cout<<"value of A from base is : "<<dobj.A<<"\n";    
	//cout<<"value of B from base is : "<<dobj.B<<"\n";     
	//cout<<"value of C from base is : "<<dobj.C<<"\n";    
	
	//dobj.fun();  
	dobj.gun();
	dobj.mun();
	
	return 0;
}