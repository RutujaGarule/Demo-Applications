#include<stdio.h>

int main()
{
    int age;
	float sec;
	
	printf("enter your age in years\n");
	scanf("%d",&age);
	
	sec = 3.156E7*age;
	
	printf("your age in seconds is %f\n",sec);

  return 0;
}