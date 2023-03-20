#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fib1,fib2,fib3;
	clrscr();
	fib1=0;
	fib2=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d",fib1);
	}
	else if(n==2)
	{
		printf("%d %d",fib1,fib2);
	}
	else
	{       printf("%d %d ",fib1,fib2);
		for(i=0;i<=(n-2);i++)
		{
			fib3=fib1+fib2;
			printf("%d ",fib3);
			fib1=fib2;
			fib2=fib3;
		}
	}
	getch();
}