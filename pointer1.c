#include<stdio.h>

int main()
{
	
	int no = 10;
	
	int *p = &no;
	
	int **q = &p;
	
	int ***x = &q;
	
	int ****z = &x;
	
	printf("value of no is : %d\n",no);
	printf("value of p is : %d\n",p);
	printf("value of *p is : %d\n",*p);
	printf("value of *q is : %d\n",*q);
	printf("value of **q is : %d\n",**q);
	printf("address of p is : %d\n",&p);
	printf("value of ***x is : %d\n",***x);
	printf("address of q is : %d\n",&q);
	printf("address of z is : %d\n",&z);
	printf("size of p is : %d\n",sizeof(p));
    printf("size of no is : %d\n",sizeof(no));
    printf("size of of x is : %d\n",sizeof(x));
	return 0;
}








