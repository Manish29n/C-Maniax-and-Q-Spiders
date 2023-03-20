#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,key,a[10],found;
	clrscr();
	printf("Enter size of Array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		found=0;
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("Element found at position %d\n",i+1);
	}
	else
	{
		printf("Element not found\n");
	}
	getch();
}
