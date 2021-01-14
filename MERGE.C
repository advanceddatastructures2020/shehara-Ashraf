#include<stdio.h>
#include<conio.h>
void main()
{
int a1[50],a2[50],a3[100],m,n,i,j,k=0;
clrscr();
printf("Enter the size of the array\n") ;
scanf("%d",&m);
Printf("Enter the sorted elements of array1");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("Enter the size of array2");
scanf("%d",&n);
printf("Enter the elements of array 2\n");
for(i=0;i<n;i++)
{
scanf("%d",&a2[j]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
}
else
{
{
a3[k]=a2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j>=n)
{
a3[k]=a2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
}
printf("After merging\n");
for(i=0;i<m;i++)
{
printf("%d",a3[i]);
}
getch();
}
}