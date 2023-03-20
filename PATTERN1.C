 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int i,row,j;
	clrscr();
	printf("Enter the number of Rows:\n");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=(row-i);j++)
		{

			printf("*\t");
		}
		printf("\n");
	}
	getch();
 }