#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,res;
	char ch;
	clrscr();
	printf("Enter first integer\n");
	scanf("%d",&a);
	printf("Enter the operator\n");
	scanf(" %c",&ch);
	printf("Enter second integer\n");
	scanf("%d",&b);
	switch(ch)
	{
		case'+':res=a+b;
		        printf("Sum = %d\n",res);
			break;
		case'-':res=a-b;
		        printf("Difference = %d\n",res);
			break;
		case'*':res=a*b;
		        printf("Product = %d\n",res);
			break;
		case'/':res=a/b;
		        printf("Quotient = %d\n",res);
			break;
		case'%':res=a%b;
		        printf("Remainder = %d\n",res);
			break;
		default:printf("Invalid operator");
			break;
	}
	getch();
}