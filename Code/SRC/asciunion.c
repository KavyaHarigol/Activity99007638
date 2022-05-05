#include "asci.h"
int func(union mychar t1)
{
int j,sum=0;
for(int j=0;j<strlen(t1.a);j++)
{
t1.integer=t1.a[j++];
printf("%x\n",t1.integer);
sum=sum+t1.a[j];
}

return sum;
}