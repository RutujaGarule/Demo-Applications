#include<stdio.h>

int main()
{
	int A = 10;
	int B = 20;
	int C = 30;
	int D = 40;
	
	int No1 = A++;
	int No2 = ++B;
	int No3 = C--;
	int No4 = --D;
	
	printf("value of A is : %d\n",A);
	printf("value of B is : %d\n",B);
	printf("value of C is : %d\n",C);
	printf("value of D is : %d\n",D);
	
	
	printf("value of No1 is : %d\n",No1);
	printf("value of No2 is : %d\n",No2);
	printf("value of No3 is : %d\n",No3);
	printf("value of No4 is : %d\n",No4);
	
	
return 0;
}