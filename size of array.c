
#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,t,n;
clrscr();
cout<<"enter the size of array";
cin>>n;
cout<<"enter the values";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
if(a[i])>a[j])
   { 
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
}
cout<<"maximum num is %d"<<a[n-1];
return 0;
getch();
}
