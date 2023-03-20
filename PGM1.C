#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Max 100
int a[Max],n,i,pos,elem,flag=0;
void readarr()
{
if (n>Max)
{
printf("n exceeds Array size\n");
}
else
{
if(n==0)
{
printf("Invalid value of n\n");
}
else
{
printf("Enter %d array elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
}
}
void display()
{
if(n==0)
{
printf("Array is empty\n");
}
else
{
printf("The contents of the array is \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}
void inselem()
{
if(n==Max)
{
printf("Array size exceeds\n");
}
else
{
printf("Enter the position to insert an element\n");
scanf("%d",&pos);
if(pos<=n)
{
printf("Enter an element\n");
scanf("%d",&elem);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=elem;
n++;
}
else
{
printf("The position entered is invalid\n");
}
}
}
void delelem()
{
if(n==0)
{
printf("No element to be deleted as array is empty\n");
}
else
{
printf("Enter the position to delete an element\n");
scanf("%d",&pos);
if(pos-1<n)
{
printf("The deleted element is %d\n",a[pos-1]);
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
}
else
{
printf("Position entered is invalid\n");
}
}
}
int main()
{
int op;
clrscr();
printf("Enter the size of Array\n");
scanf("%d",&n);
while(1)
{
printf("Choose the Following Operations\n");
printf("1-Creating an Array of N elements\n");
printf("2-Display Array elements\n");
printf("3-Insert an element to the specific position\n");
printf("4-Delete an element from the specific position\n");
printf("5-Exit the Menu\n");
printf("Enter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1: readarr();
flag=1;
break;
case 2: if(flag==0)
{
printf("Array is empty\n");
}
else
{
display();
}
break;
case 3: if(flag==0)
{
printf("Array is empty\n");
}
else
{

inselem();
}
break;
case 4: if(flag==0)
{
printf("Array is empty\n");
}
else
{
delelem();
}
break;
case 5: exit(0);
break;
default:printf("Enter a valid operation\n");
exit(0);
break;
}
}
}