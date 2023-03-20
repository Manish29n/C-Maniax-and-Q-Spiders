#include<stdio.h>
#include<conio.h>
void main()
{
	extern int i;
	clrscr();
	printf("%d",i);
	getch();
}
int i;