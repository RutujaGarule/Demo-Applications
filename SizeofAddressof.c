#include<stdio.h>
int main()
{
int Arr[5] = {1,2,3};

int Brr[4];
printf("Address of Arr is :%d\n",Arr);

printf("Address of Arr is :%d\n",&Arr);

printf("size of Arr is : %d\n",sizeof(Arr));

printf("value of Arr is : %d\n",Arr[1]);

printf("value of Arr is : %d\n",Arr[4]);

Brr[0] = 10;
Brr[1] = 20;
Brr[2] = 30;

printf("value of Brr is : %d\n",Brr[1]);

printf("value of Brr is : %d\n",Brr[2]);

printf("value of Brr is : %d\n",Brr[3]);

return 0;}