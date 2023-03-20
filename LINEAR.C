#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,key,n,found=0;
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
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
		printf("Key elemnet found in position %d\n",i+1);
	else
		printf("Key elemnt not found\n");
	getch();
}