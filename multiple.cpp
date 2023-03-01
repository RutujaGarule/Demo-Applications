#include<iostream>
using namespace std;

class Base1
{
    public :
	  int A;
	  int B;
	  
	  Base1()
	  {
	    cout<<"inside base1 constructor\n";
	  }
	  ~Base1()
	  {
	     cout<<"inside base1 destructor\n";
	  }
	  void fun()
	  {
	    cout<<"inside fun\n";
	  }
};

class Base2
{
    public :
	   int i;
	   int j;
	   
	   Base2()
	  {
	    cout<<"inside base2 constructor\n";
	  }
	  ~Base2()
	  {
	     cout<<"inside base2 destructor\n";
	  }
	  void gun()
	  {
	    cout<<"inside gun\n";
	  }
	   
};

class Derived : public Base1,public Base2
{
   public : 
     int X;
	 
	 Derived()
	  {
	    cout<<"inside Derived constructor\n";
	  }
	  ~Derived()
	  {
	     cout<<"inside Derived destructor\n";
	  }
	  void sun()
	  {
	    cout<<"inside sun\n";
	  }

};

int main()
{
     cout<<"size of base1 is"<<sizeof(Base1)<<"\n";
	 cout<<"size of base2 is"<<sizeof(Base2)<<"\n";
	 cout<<"size of derived is"<<sizeof(Derived)<<"\n";
	 
	 Derived dobj;
	 
	 dobj.fun();
	 dobj.gun();
	 dobj.sun();
	 
	 cout<<"size of dobj is"<<sizeof(dobj)<<"\n";
	 
	 

    return 0;
}