#include<stdio.h>
#include<conio.h>
int main()
{
char r,s;
printf("enter the string");
scanf("%s",&r);
s=strrev(r);
if(r==s)
{
printf("\n the string is palindrome");
}
else
{
printf("\n the string is not palindrome");
}
getch();
}
