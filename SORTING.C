#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i,j,a,n,number[30];

printf("Enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<n;++j)
{
if(number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the number arranged in ascending order are given below");
for(i=0;i<n;++i)
printf("%d\n",number[i]);
getch();
}