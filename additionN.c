// Accept N numbers from user and perform addition

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
	int iSize = 0;
	int i = 0;
	int iSum = 0;
	
	printf("enter how many elelments you want\n");
	scanf("%d",&iSize);
	
	Arr = (int *)malloc(iSize * sizeof(int));
	
	printf("enter the elements\n");
	for(i = 0; i<iSize; i++)
	{
		scanf("%d",&Arr[i]);
		
	}
	
	for(i = 0; i<iSize; i++)
	{

        iSum = iSum + Arr[i];
	}
	
	printf("Addition is : %d\n",iSum);
	
	free(Arr);


return 0;
}