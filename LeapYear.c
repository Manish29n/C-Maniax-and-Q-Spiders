#include <stdio.h>
void main()
{
    int year;
    scanf("%d",&year);
    if(((year%4==0)||(year%400==0))&&(year%100!=0))
    {
        printf("It is a leap year\n");
    }
    else
        printf("Not a leap year\n");
}
