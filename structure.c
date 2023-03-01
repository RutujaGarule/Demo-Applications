#include<stdio.h>

struct Demo
{
	int i;
	float f;
	int j;
	double d;
};          

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	
	obj1.d = 11.0;
	obj2.i = 21;
	obj3.j = 51;
	
	printf("size of obj1 is : %d\n",sizeof(obj1));
	printf("size of obj2 is : %d\n",sizeof(obj2));
	printf("i od obj2 is : %d\n",obj2.i);
	
	
	return 0;
}

    