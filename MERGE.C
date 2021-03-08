#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[50],arr2[50],arr3[100],m,n,i,j,k=0;
printf("enter the no of elements1:\n");
scanf("%d",&m);
printf("enter the elements\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the no of elements 2:\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
i=0;
j=0;
while(i<m && j<n)
{
if(arr1[i] < arr2[j])
{
arr3[k]=arr1[i];
i++;
}
else
{
arr3[k]=arr2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
arr3[k]=arr2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
arr3[k]=arr1[i];
i++;
j++;
}
}printf("merged array:\n");
for(i=0;i<m+n;i++)
{
printf("%d\n",arr3[i]);
}
getch();
}
