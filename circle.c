#include<stdio.h>

int main()
{
   int r;
   int circum;
   int area;
   
   printf("enter redius of circle\n");
   scanf("%d",&r);
   
   circum = 2*22/7*r;
   area = 22/7*r*r;
   
   printf("circumference of a circle is %d\n",circum);
   printf("area of a circle is %d\n",area);

  return 0;
}