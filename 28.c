#include<stdio.h>
#include<conio.h>
int main()
{
int a[x],i;
clrscr();
cout<<"enter the size of array";
cin>>x;
cout<<"enter the array num";
for(i=0;i<=x;i++)
{
cin>>a[i];
}
cout<<"the num with index ";
for(i=0;i<=x;i++)
cout<<"%d\t index %d"<<a[i]<<i;
return 0;
getch();
}
