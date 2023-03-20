#include<stdio.h>
#include<string.h>
#define size 100
char mains[size],pat[size],rep[size],temp[size];
void patmat()
{
int m=0,c=0,p=0,t=0,r=0,flag=0;
while(mains[m]!='\0')
{
if(mains[c]==pat[p])
{
c++;
p++;
if(pat[p]=='\0')
{
for(r=0;rep[r]!='\0';r++)
{
temp[t]=rep[r];
t++;
}
flag++;
p=0;
m=c;
}
}
else
{
temp[t]=mains[m];
t++;
m++;
c=m;
p=0;
}
}
if(flag==0)
{
printf("pattern not found\n");
}
else
{
printf("Pattern found\n");
temp[t]='\0';
printf("Resultant string is\n");
puts(temp);
}
}
void readstr()
{
printf("Enter the main string\n");
gets(mains);
printf("Enter the pattern string\n");
gets(pat);
printf("Enter the replaced string\n");
gets(rep);
}
void display()
{
printf("The main string is\n");
puts(mains);
printf("The pattern string is\n");
puts(pat);
printf("The replaced string is\n");
puts(rep);
}
void main()
{
readstr();
display();
patmat();
}