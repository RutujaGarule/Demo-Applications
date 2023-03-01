#include<stdio.h>

int main()
{
    int A = 1;
    short int B = 2;
    long int C = 3;

	int Arr[4] = {10,20,30,40};

	int *p = &(Arr[0]);
	
    int *q = &(Arr[3]);
	
	printf("%d\n",Arr[0]);
	
	printf("%d\n",*p);
	
	printf("%d\n",Arr[3]);
	
	printf("%d\n",*q);
	
	printf("size of A is : %d\n",sizeof(A));
	printf("size of B is : %d\n",sizeof(B));
	printf("size of C is : %d\n",sizeof(C));
	
	
	return 0;
}








