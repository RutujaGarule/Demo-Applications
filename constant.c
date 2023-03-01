#include<stdio.h>


    int A = 1;
	const int B = 2;
    static const int C = 5;
	
	extern int D;
	extern int Z;
	extern const int X ;
	

int main()
{
    int No1 = 10;
	const int No2 = 20;
	int No3 = 0;
	
	No1++;
	
	
	printf("value of No1 is :%d\n",No1);
	printf("value of No2 is :%d\n",No2);
	
    printf("value of A is :%d\n",A);
    printf("value of B is :%d\n",B);
    printf("value of C is :%d\n",C);
	
	printf("value of D is :%d\n",D);
    printf("value of Z is :%d\n",Z);
    printf("value of X is :%d\n",X);

return 0;
}