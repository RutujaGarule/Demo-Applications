#include<iostream>
using namespace std;

int main()
{
	 int i = 0;
	register int j = 0;
	int k = 0;
	auto l = 0;
	auto m;   		//not allowed
	
	int * p = &i;
	int * q = &j;
	int * r = &k;
	
	cout<<"Address of i is : "<<&i<<"\n";
	cout<<"Address of j is : "<<&j<<"\n";
	cout<<"Address of k is : "<<&k<<"\n";
	
}
