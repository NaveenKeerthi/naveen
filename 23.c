#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,temp;
  clrscr();
	printf("enter the number");
	scanf("%d",&n);
	printf("list of element");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        }
	}
	}
	printf("sorted list \n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",a[i]);
	}
	printf("minimum number is:");
	printf("%d\n",a[0]);
	return 0;
  getch();
}
