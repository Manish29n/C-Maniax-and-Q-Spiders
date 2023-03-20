#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int s[],int *t,int item)
{
if(*t>=MAX-1)
printf("STACK is FULL\n");
else
s[++(*t)]=item;
}
int pop(int s[],int *t)
{
int item;
if(*t==-1)
printf("STACK is EMPTY\n");
else
{
item=s[*t];
*t=*t-1;
return(item);
}
}
void display(int s[], int *t)
{
int i;
if(*t==-1)
printf("STACK is EMPTY\n");
else
{
for(i=*t;i>=0;i--)
printf("%d\n",s[i]);
}
}
int palin(int s[])
{
int n,i,item,top=-1;
printf("Enter the stack size you want\n");
scanf("%d",&n);
printf("Enter the %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&item);
push(s,&top,item);
}
for(i=0;i<n;i++)
{
item=s[top--];
if(s[i]!=item)
return 0;
return 1;
}
}
void main()
{
int ch,item,n,i,s[100],top=-1,flag;
while(1)
{
printf("1-Push Element\n2-Pop Element\n3-Display Stack\n4-Check Palindrome\n5-Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the element to be pushed\n");
scanf("%d",&item);
push(s,&top,item);
break;
case 2:item=pop(s,&top);
printf("The item popped from stack is %d\n",item);
break;
case 3:display(s,&top);
break;
case 4:flag=palin(s);
if(flag==0)
printf("The number is not palindrome\n");
else
printf("The number is a plaindrome\n");
break;
case 5:exit(0);
}
}
}