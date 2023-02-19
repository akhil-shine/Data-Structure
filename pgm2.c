#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[50],arr2[50],i,j,n,m,a,arr3[50],k;
printf("Enter the size of array 1:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%d. Enter the Number:", i+1);
scanf("%d",&arr1[i]);
}
printf("\nEnter the size of array 2:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("\n%d. Enter the Number:" ,i+1);
scanf("%d",&arr2[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr1[i]>arr1[j])
{
a=arr1[i];
arr1[i]=arr1[j];
arr1[j]=a;
}
}
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(arr2[i]>arr2[j])
{
a=arr2[i];
arr2[i]=arr2[j];
arr2[j]=a;
}
}
}

printf("\nFirst Array Elements are :");
for(i=0;i<n;i++)
{
printf("%d",arr1[i]);
}
printf("\nSecond Array Elements are :");
for(i=0;i<m;i++)
{
printf("%d",arr2[i]);
}
k=n+m;
for(i=0;i<n;i++)
arr3[i]=arr1[i];
for(i=0;i<m;i++)
arr3[i+m]=arr2[i];
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(arr3[i]>arr3[j])
{
a=arr3[i];
arr3[i]=arr3[j];
arr3[j]=a;
}
}
}
printf("\n\nThe Merged Array is :");
for(i=0;i<k;i++)
printf("%d",arr3[i]);
}
