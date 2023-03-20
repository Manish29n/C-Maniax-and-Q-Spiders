#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[10],sum=0;
	clrscr();
	printf("Enter the size of element\n");
	scanf("%d",&n);
	printf("Enter the elements of Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Array is;\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nThe sum of all the elements of Array is \n");
	for(i=0;i<n;i++);
	{
		sum=sum+a[i];
	}
	printf("%d\n",sum);
	getch();
}