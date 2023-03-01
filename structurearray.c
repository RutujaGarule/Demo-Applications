#include<stdio.h>

struct PPA
{
  int arr[4];
  float brr[4];
};

int main()
{
  struct PPA obj;
  
  obj.arr[0] = 2;
  obj.arr[1] = 4;
  obj.arr[2] = 5;
  obj.brr[0] = 12.78;
  obj.brr[1] = 67.78;

  printf("size of obj is :%d\n",sizeof(obj));
  printf("%d\n",obj.arr[0]);
  printf("%d\n",obj.arr[1]);
  printf("%d\n",obj.arr[2]);
  printf("%d\n",obj.arr[3]);
  printf("%f\n",obj.brr[0]);
  printf("%f\n",obj.brr[1]);
  printf("%f\n",obj.brr[2]);
  
return 0;
}