#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],r,c,i,j;
	clrscr();
	printf("Enter row and column size of Matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter Matrix Elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}