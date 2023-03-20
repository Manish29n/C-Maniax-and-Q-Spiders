#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three umbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("Ascending order:%d,%d,%d\n",a,b,c);
			}
			else
			{
				printf("Ascending order:%d,%d,%d\n",a,c,b);
			}
		}
		else
		{
			printf("Ascending order:%d,%d,%d\n",c,a,b);
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			if(a>c)
			{
				printf("Ascending order:%d,%d,%d\n",b,a,c);
			}
			else
			{
				printf("Ascending order:%d,%d,%d\n",b,c,a);
			}
		}
		else
		{
			printf("Ascending order:%d,%d,%d\n",c,b,a);
		}
	}
	else
	{
		printf("Unknown Error");
	}
	getch();
}