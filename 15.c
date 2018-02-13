#include<stdio.h>
#include<conio.h>
int main(void)
{
int a,b,i;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d",i);
}
else
{
printf("\n");
}
}
return 0;
getch();
}
