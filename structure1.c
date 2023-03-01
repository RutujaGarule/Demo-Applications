#include<stdio.h>

struct Demo
{
	int i;
	struct Demo *ptr;      //self referential structure
};

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	obj1.i = 10;
	obj2.i = 20;
	obj3.i = 30;
	
	obj1.ptr = &obj2;
	obj2.ptr = &obj3;
	obj3.ptr = NULL;
	
	printf("size of object 1 is : %d\n",sizeof(obj1));
	printf("size of object 2 is : %d\n",sizeof(obj2));
	printf("value of i for obj1 is :%d\n",obj1.i);
	printf("value of i for obj3 is :%d\n",obj3.i);
	printf("%d\n",obj1.ptr);
	printf("%d\n",obj2.ptr);
	printf("%d\n",obj3.ptr);
	printf("address of obj1 is :%d\n",&obj1);
	printf("address of obj2 is :%d\n",&obj2);
	printf("address of obj3 is :%d\n",&obj3);
	
	return 0;
}

    