#include<iostream>
using namespace std;

class Maximum
{
	                        public :
		
		int CheckMax(int Value1,int Value2)
		{
			if(Value1>Value2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	int No1 = 0;
	int No2 = 0;
	int Max = 0;
	
	cout<<"inside main function\n";
	cout<<"enter two numbers\n";
	cin>>No1>>No2;
	
	Maximum obj;
	Max = obj.CheckMax(No1,No2);
	
	if(Max == 1)
	{
		cout<<"maximum number is :"<<No1<<"\n";
	}
	else
	{
		cout<<"maximum number is :"<<No2<<"\n";
	}
	
	return 0;
}