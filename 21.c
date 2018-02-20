#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,d,i,x,y,s;
clrscr();
cout<<"enter the initial value for series";
cin>>a;
cout<<"enter the difference";
cin>>d;
cout<<"enter no.of times";
cin>>n;
x=a;
  y=n*d;
  s=n*(x+y)/2;
cout<<"sum of ap series %d"<<s;
return 0;
getch();
}
