#include <stdio.h>
#include<conio.h>
int main(void) 
{
int i,count=0;
clrscr();
char a[50];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]!=' ')
	count++;
}
printf("%d",count);

	return 0;
  getch();
}
