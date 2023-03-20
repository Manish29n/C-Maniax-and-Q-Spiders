#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	clrscr();
	printf("enter the number of rows\n");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=(row-i);j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	getch();
}