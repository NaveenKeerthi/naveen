#include<stdio.h>
#include<conio.h>
int main()
{
int i=2,n,flag=0;
cout<<"enter the num";
cin>>n;
while(i<=n/2)
{
(n%i==0)
 flag=1;
 else
 flag=0;
 }
 if(flag==0)
 cout<<"the num is %d prime"<<n;
 else
 cout<<"the num is %d not prime"<<n;
return 0;
}
