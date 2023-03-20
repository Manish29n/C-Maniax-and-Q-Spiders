#include <stdio.h>
#include<conio.h>

void main() 
{
    int i,t,res,a,b;
    clrscr();
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
	res=0;
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("%d",res);
	printf("\n");
    }
    getch();
}
