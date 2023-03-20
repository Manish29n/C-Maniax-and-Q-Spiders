#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,res,n1;
	clrscr();
	printf("Enter the table required\n");
	scanf("%d",&n);
	printf("Enter the value upto which the table is required\n");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		res=n*i;
		printf("%d*%d=%d\n",n,i,res);
	}
	getch();
}