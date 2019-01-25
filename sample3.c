#include<stdio.h>
#include<conio.h
int main()
{
char c;
printf("enter the character:");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("%c is alphabet",c);
}
elseif(c>='0'&&c<='9')
{
printf("%c is number",c);
}
else
{
printf("%c is unknown",c);
}
return 0;
}
