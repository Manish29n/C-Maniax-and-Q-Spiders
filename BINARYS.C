#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,key,mid,high,low,a[10],found=0;
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
	low=0,high=n-1;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==key)
		{
			found=1;
			break;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(found==1)
	{
		printf("Element found at position %d\n",mid+1);
	}
	else
	{
		printf("Element not found\n");
	}
	getch();
}
