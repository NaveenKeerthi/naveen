#include<stdio.h.h>
#include<conio.h>
int main()
{
int t,n,s=0,i;
cout<<"enter the num for palindrome";
cin>>n;
t=n;
while(s!=0)
{
t=t%10;
  s=s*10+t;
  t=t/10;
}
  if(s==n)
    cout<<"the num is palindrome";
  else
    cout<<"the num is not palindrome";
}
