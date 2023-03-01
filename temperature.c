#include<stdio.h>

int main()
{
   int f;
   int c;
   
   printf("enter temperature in fahrenhit\n");
   scanf("%d",&f);
   
   c = (f-32)*5/9;
   printf("temperature in celsius is %d\n",c);

  return 0;
}