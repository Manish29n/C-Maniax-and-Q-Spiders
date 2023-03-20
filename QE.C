#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,x,x1,x2,real,img,disc;
	clrscr();
	printf("Enter the 3 variables\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0&&b==0)
	{
		printf("invalid input\n");
	}
	else if(a==0)
	{
		printf("It is a Linear equation\n");
		x=-c/b;
		printf("Root = %.3f\n",x);
	}
	else
	{
		disc=(b*b)-(4*a*c);
		if(disc==0)
		{
			printf("Roots are real and equal\n");
			x1=x2=(-b)/(2*a);
			printf("Root1 = %.3f\nRoot2 = %.3f\n",x1,x2);
		}
		else if(disc>0)
		{
			printf("Roots are real and distinct\n");
			x1=(-b+(sqrt(disc)))/(2*a);
			x2=(-b-(sqrt(disc)))/(2*a);
			printf("Root1 = %.3f\nRoot2 = %.3f\n",x1,x2);
		}
		else
		{
			printf("Roots are real and imaginary\n");
			real=(-b)/(2*a);
			img=(sqrt(fabs(disc)))/(2*a);
			printf("Root1 = %.3f+%.3fi\nRoot2 = %.3f-%.3fi\n",real,img,real,img);
		}
	}
	getch();
	return(0);
}