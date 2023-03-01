#include<iostream>
using namespace std;

class Hello
{
	public :
		void gun();
};
class Demo
{
	public :
		int i;
	private :
		int j;	
	protected :
		int k;
	public :
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		void fun()
		{
			cout<<"inside demo\n";
		}
		friend void Hello::gun(); 
};

void Hello::gun()
	{
		Demo obj;
	cout<<"value of i :"<<obj.i<<"\n";
	cout<<"value of j :"<<obj.j<<"\n";
	cout<<"value of k :"<<obj.k<<"\n";
	}

int main()
{
	Hello hobj;
	hobj.gun();
	
	return 0;
}