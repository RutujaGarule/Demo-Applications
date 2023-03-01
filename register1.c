#include<stdio.h>

int main()
{
	auto int i;
	//register int j = 0;
	int k = 0;
	
	int * p = &i;
	//int * q = &j;
	int * r = &k;
	
	
	printf("%d\n",i);
	printf("Address of i is : %d\n",&i);
	//printf("Address of j is : %d\n",&j);
	printf("Address of k is : %d\n",&k);
	
	
	
	return 0;
}