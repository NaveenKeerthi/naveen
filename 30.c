#include<stdio.h>
#include<conio.h>
int main()
{
int h1,m1,h2,m2;
clrscr();
cout<<"enter the time %d %d"<<h1<<m1;
 cout<<"enter the time %d %d"<<h2<<m2;
 h2=h2-h1;
m2=m2-m1;
if(m2<m1)
 m2+=60;
 if(h2<0)
    ++h2;
 else
  --h2;
cout<<"time %d:%d"<<h2<<m2;
return 0;
getch();
}
