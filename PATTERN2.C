 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int row,i,j,space;
	char astr;
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
			astr='*';
			printf("%4c",astr);
		}
		printf("\n");
	}
	getch();
 }