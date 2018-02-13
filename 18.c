
#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,i,x,p=1,s=0;
cout<<"enter the number intervals  ";
cin>>n>>m;
for(x=n;x<=m;x++)
{
if(x!=0)
{
x=x/10;
for(i=0;i<3;i++)
{
p=p*x;
}
s=p+s;
}
if(s==n)
cout<<"%d"<<n;
}
return 0;
getch();
}
