#include<iostream>
using namespace std;

void fun(int no)
{
	cout<<"inside call by value :"<<no<<"\n";
	no++;
}

void gun(int *p)
{
	cout<<"inside call by address :"<<*p<<"\n";
	(*p)++;
}

void sun(int &ref)
{
	cout<<"inside call by refrance :"<<ref<<"\n";
	ref++;
}

int main()
{
	int i = 10;
	int j = 10;
	int k = 10;
	
	fun(i);
	cout<<i<<"\n";
	gun(&j);
	cout<<j<<"\n";
	sun(k);
	cout<<k<<"\n";
	
	return 0;
}