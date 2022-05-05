**
 * @file asci.h
 * @author kavya (rkavyaharigol17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
union mychar
{
char a[20];
uint8_t integer;
};

int func(union mychar t1)
{
int j,sum=0;
for(int j=0;j<strlen(t1.a);j++)
{
t1.integer=t1.a[j++];
printf("%x\n",t1.integer);
sum=sum+t1.a[j];
}
printf("Sum=%x\n",sum);
return func;
}

int main()
{
union mychar t1;
char ch[20];
int sum=0;
printf("Enter string \n");
scanf("%s",t1.a);
func(t1);
return 0;
}
