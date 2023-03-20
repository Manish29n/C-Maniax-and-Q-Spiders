#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,key,n,found=0,low,high,mid;
	clrscr();
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
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
		printf("The key element found in position %d\n",mid+1);
	}
	else
		printf("The element not found\n");
	getch();
}
