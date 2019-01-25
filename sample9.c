#include<stdio.h>
#include<conio.h>
int main()
{
int num,tn,count;
printf("Enter a number:");
scanf("%d",&num);
count=0;
tn=num;
while(tn>0)
{
count++;
tn/=10;
}
printf("%d Total numbers of digits are number: %d.",count,num);
return 0;
}
