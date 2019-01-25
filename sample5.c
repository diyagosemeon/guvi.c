#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter the year");
scanf("%d",&a);
if(a%4==0)
{
  if((a%100==0)||(a%400==0))
  {
  printf("%d the year is leap year",a);
  }
  else
  {
  printf("%d the year is not leap year",a);
  }
  else
  {
  printf("%d the year is not leap year",a);
  }
  return 0;
  }
  
