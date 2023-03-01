#include<stdio.h>

extern int add();

int main()
{   int iNo1 = 10;
    int iNo2 = 20;
	int ret = 0;
	
	ret = add(iNo1,iNo2);
	printf("addition is : %d\n",ret);
	
	return 0;
	
}