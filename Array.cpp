#include<iostream>
using namespace std;

class Array
{
	public :
		int iSize;
		int *Arr;
		
		Array(int iLength = 10)
		{
			iSize = iLength;
			Arr = new int[iSize];
		}
		~Array()
		{
			delete []Arr;
		}
		void Accept()
		{
			cout<<"enter the values\n";
			int i = 0;
			
			for(i = 0;i< iSize ;i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()
		{
			cout<<"elements of array arae : \n";
			int i = 0;
			for(i = 0; i <iSize; i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
		int Summation()
		{
			int iSum = 0;
			int i = 0;
			for(i = 0;i < iSize; i++)
			{
				iSum = iSum + Arr[i];
			}
			return iSum;
		}
	
	
	
};

int main()
{
	int iRet = 0;
	
	Array obj1(4);
	Array obj2(6);
	
	obj1.Accept();
	obj1.Display();
	iRet = obj1.Summation();
	
	cout<<"summation is :"<<iRet<<"\n";
	
	
	
	return 0;
}