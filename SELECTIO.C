#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,temp,j;
	clrscr();
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The Sorted Array is \n");
	for(i=0;i<n;i++);
	{
		printf("%d\n",a[i]);
	}
	getch();
}