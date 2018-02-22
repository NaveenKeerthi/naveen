include<stdio.h>
#include<conio.h>
int main()
{
int n,i,s,a[100];
clrscr();
cout<<"enter the size if array";
cin>>n;
  cout<<"enter the array num";
  for(i=1;i<=n;i++)
{
cin>>a[i];
}
s=(n+1)/2;
cout<<"the median value in array is %d"<<a[s];
return 0;
getch();
}
