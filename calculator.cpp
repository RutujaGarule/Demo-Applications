// program to build clculator using oop

#include<iostream>
using namespace std;

class Calculator
{
	public :
		int j;
		int Ans;
		Calculator()
		{
			j = 0;
			Ans = 0;
		}
		int Add(int Arr[],int size)
		{
			for(j=0;j<size;j++)
			{
				Ans = Ans + Arr[j];
			}
			return Ans;
		}
	
};
int main()
{
	int size = 0;
	int *Arr = NULL;
	int i = 0;
	int ret = 0;
	
	cout<<"enter howmany elements you want\n";
	cin>>size;
	
	Arr = new int;
	
	cout<<"enter numbers\n";
	for(i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	Calculator cobj;
	ret =cobj.Add(Arr,size);
	cout<<"Addition is :"<<ret<<"\n";
	
	return 0;
}