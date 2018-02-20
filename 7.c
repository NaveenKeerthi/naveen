#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
scanf("%c",&ch);
if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
{
printf("Alphabet");
}
else
{
printf("Not an alphabet");
}
getch();
}
