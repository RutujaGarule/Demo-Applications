#include<stdio.h>

void Demo()
{
	printf("Inside Demo Function\n");
	
}
int add(int A,int B)
{
	int Ans = 0;
	Ans = A + B;
	return Ans;
}

int main()
{
	int no1 = 10;
	int no2 = 20;
	int ret = 0;
	
	Demo();
	
	void (*fp)();
	fp = Demo;
	fp();
	
	ret = add(no1,no2);
	printf("addition is :%d\n",ret);
	
	int (*fp1)(int,int); //fp1 is a pointer which points to the function,that function accepts two parameter first is integer second is integer and that function returns integer.
	fp1 = add;
	ret = fp1(no1,no2);
	printf("addition is :%d\n",ret);
	
	return 0;
}