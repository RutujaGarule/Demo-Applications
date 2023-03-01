#include<stdio.h>

struct Hello
{
int *ip;
float *fp;
char *cp;
};

int main()
{

int no = 10;
float f = 12.46;
char ch = 'A';

struct Hello obj;
obj.ip = &no;
obj.fp = &f;
obj.cp = &ch;

printf("size of obj is :%d\n",sizeof(obj));

printf("value of obj.ip is :%d\n",obj.ip);
printf("value of obj.fp is :%d\n",obj.fp);
printf("value of obj.cp is :%d\n",obj.cp);

printf("address of no is :%d\n",&no);
printf("address of f is :%d\n",&f);
printf("address of ch is :%d\n",&ch);

printf("value refer by obj.ip is :%d\n",*obj.ip);
printf("value refer by obj.fp is :%f\n",*obj.fp);
printf("value refer by obj.cp is :%c\n",*obj.cp);


return 0;
}