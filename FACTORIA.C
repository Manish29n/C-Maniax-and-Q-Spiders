#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,fac=1;
	clrscr();
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("Factorial of %d is %d",n,fac);
	getch();
}