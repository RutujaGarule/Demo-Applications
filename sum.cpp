// program to find sum of natural numbers

#include<iostream>
using namespace std;

int main()
{
	
	int size = 0;
	int *Arr = NULL;
	int i = 0;
	int sum = 0;
	
	cout<<"enter howmany elements you want?\n";
	cin>>size;
	
	Arr = new int;
	
	cout<<"Enter the elements\n";
	
	for(i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	for(i=0;i<size;i++)
	{
		sum = sum + Arr[i];
	}
	cout<<"addition is :"<<sum<<"\n";
	
	delete []Arr;
	
	return 0;
}