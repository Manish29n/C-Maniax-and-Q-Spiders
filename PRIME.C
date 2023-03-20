#include <stdio.h>
#include<conio.h>
int isprime(int n);
int main()
{
    int x,p,i,a[10];
    clrscr;
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
	p=isprime(a[i]);
	if(p)
	{
	    printf("%d is the lucky number\n",a[i]);
	    break;
	}
    }
    return 0;
    getch();
}
int isprime(int n)
{
    int flag,j;
    for(j=2;j<=n/2;j++)
    {
	if(n%j==0)
	{
	    flag=1;
	    break;
	}
    }
    if(flag==0)
	return 0;
    else
	return 1;
}
