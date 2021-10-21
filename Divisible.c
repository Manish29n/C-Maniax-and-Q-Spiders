#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],k=0,t,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the Number that is to be divisible\n");
    scanf("%d",&t);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%t==0)
            k++;
    }
    printf("%d numbers are divisible by %d",k,t);
}
