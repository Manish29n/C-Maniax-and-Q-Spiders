#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is smallest\n",a);
		}
	}
	if(b<c)
	{
		if(b<a)
		{
			printf("%d is smallest\n",b);
		}
	}
	if(c<a)
	{
		if(c<b)
		{
			printf("%d is smallest\n",c);
		}
	}
	getch();
}