#include<stdio.h>

struct demo
{
  int i;
  float f;
  char ch;
  double d;
};

struct hello
{
	int arr[3];
	float f;
	char ch;
	double d;
};

int main()
{
   struct demo dobj;
   printf("%d\n",sizeof(dobj));
   
   struct hello hobj;
   printf("%d",sizeof(hobj));



return 0;
}