#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,i,x=1,y=1,z=1,res;
	clrscr();
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		x=x*i;
	}
	for(i=1;i<=(n-r);i++)
	{
		y=y*i;
	}
	for(i=1;i<=r;i++)
	{
		z=z*i;
	}
	res=x/(y*z);
	printf("nCr=%d",res);
	getch();
}