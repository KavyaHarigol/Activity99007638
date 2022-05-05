#include "asci.h"

int main()
{
union mychar t1;
char ch[20];
int sum;
printf("Enter string \n");
scanf("%s",t1.a);
sum=func(t1);
printf("Sum=%x\n",sum);
return 0;
}