#include<stdio.h>
#include<conio.h>
void main()
{
	int row,n=1,i,j,space;
	clrscr();
	printf("Enter the number of Rows:\n");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(space=1;space<=(row-i);space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				n=1;
			}
			else
			{
				n=n*(i-j+1)/j;
			}
			printf("%4d",n);
		}
		printf("\n");
	}
	getch();
}