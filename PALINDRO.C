#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,temp,digit;
	clrscr();
	printf("Enter an integer\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("The given number is :%d\n",temp);
	printf("The reversed number is :%d\n",rev);
	if(rev==temp)
		printf("it is a palindrome\n");
	else
		printf("It is not a palindrome\n");
	getch();
}