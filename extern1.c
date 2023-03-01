#include<stdio.h>
int f = 7;
extern int B;
extern int C;

extern Demo();

int main()
{
int A = 10;

printf("value of A is :%d\n",A);
printf("value of B is :%d\n",B);
printf("value of C is :%d\n",C);

Demo();
Demo();
return 0;}