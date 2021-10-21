#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=1,fact=1;
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
        exit(0);
    }
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;
}
