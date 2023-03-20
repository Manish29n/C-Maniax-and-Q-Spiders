#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fib1,fib2,fib3,n;
	fib1=0;
	fib2=1;
	printf("Enter the value of N\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d\n",fib1);
	}
	else if(n==2)
	{
		printf("%d %d\n",fib1,fib2);
	}
	else
	{
		printf("%d %d ",fib1,fib2);
		i=0;
		while(i<(n-2))
		{
			fib3=fib1+fib2;
			printf("%d ",fib3);
			fib1=fib2;
			fib2=fib3;
			i++;
		}
	}
	getch();
}