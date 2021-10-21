#include <stdio.h>
void main()
{
    int num,dig,temp,rev=0;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    if(temp==rev)
        printf("It is a palindrome\n");
    else
        printf("Not a palindrome\n");
}
