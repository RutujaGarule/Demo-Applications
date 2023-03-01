#include<stdio.h>

int main()
{
   float a;
   float b;
   float c;
   float s;
   float area;
   
   printf("enter three sides of triangle\n");
   scanf("%f%f%f",&a,&b,&c);
   
   s = (a+b+c)/2;
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   
   printf("area of triangle is %f\n",area);

  return 0;
}
