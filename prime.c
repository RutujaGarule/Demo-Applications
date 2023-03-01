#include<stdio.h>

int prime(int num)
{   
    int i;
	for(i=2;i<num;i++);
	
	    if(num%i==0)
			return 0;
	
	return 1;
}

int main()
{
  int no;
  int ret;
  
  printf("enter one number\n");
  scanf("%d",&no);
  
  ret = prime(no);
  
  if(ret==0)
	  printf("number is not prime number\n");
  else
	  printf("number is prime\n");
  
  return 0;
}