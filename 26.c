#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[i],a[min],min,t,i,j;
cout<<"enter the size of the array";
cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
t=a[i];
a[i]=a[min];
a[min]=t;
}
cout<<"the sorted array is";
for(i=0;i<n;i++)
{
cout<<a[i]);
}
return 0;
getch();
}

