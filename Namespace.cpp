#include<iostream>
//using namespace std;

namespace Marvellous
{
	class Demo
	{
		public :
			int i ,j;
			void fun()
			{
				std::cout<<"inside fun of demo from marvellous\n";
			}
	};
	class Hello
	{
		public :
		int x,y;
	};
	
}
namespace Infosystems
{
	class Demo
	{
		public :
			int a,b;
			void fun()
			{
				std::cout<<"inside fun of demo from infosystems\n";
			}
			
	};
}

int main()
{
	Marvellous::Demo obj1;
	obj1.fun();
	Infosystems::Demo obj2;
	obj2.fun();
	
	using namespace Marvellous;
	
	Hello hobj;
	Demo obj3;
	obj3.fun();
	
	
	
	return 0;
}