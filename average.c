#include<stdio.h>

int main()
{
   int iNo1;
   int iNo2;
   int iNo3;
   int Avg;
   
   printf("enter three numbers\n");
   scanf("%d%d%d",&iNo1,&iNo2,&iNo3);
   
   Avg = (iNo1+iNo2+iNo3)/3;
   printf("average of numbers is %d\n",Avg);

   return 0;
}