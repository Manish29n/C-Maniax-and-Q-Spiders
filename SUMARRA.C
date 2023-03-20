#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,r,c,sum[10][10];
	clrscr();
	printf("Enter row and column size of matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter Matrix A Elments\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Matrix B Elments\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of the two matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}