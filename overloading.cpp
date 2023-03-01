#include<iostream>
using namespace std;

class Overloading
{
  public:
     int Add(int a,int b)
	 {
	     cout<<"Addition of 2 integers\n";
		 return a+b;
	 }
	 
	 float Add(float a,float b)
	 {
	     cout<<"Addition of floats\n";
		 return a+b;
	 }
      
	  double Add(double a,double b)
	  {
		  cout<<"Addition of double\n";
		  return a+b;
	  }
	  
	  int Add(int a,int b,int c)
	  {
		  cout<<"Addition of 3 integers\n";
		  return a+b+c;
	  }


};

int main()
{
   Overloading obj;
   int i = 0;
   float f = 0;
   double d = 0;
   
   i = obj.Add(10,11);
   cout<<i<<"\n";
   f = obj.Add(12.6f,76.43f);
   cout<<f<<"\n";
   d = obj.Add(12.6,76.43);
   cout<<d<<"\n";
   i = obj.Add(10,11,12);
   cout<<i<<"\n";
   
   cout<<sizeof(12.6f)<<"\n";
   cout<<sizeof(12.6)<<"\n";
   
   
   
   
   
   



return 0;
}