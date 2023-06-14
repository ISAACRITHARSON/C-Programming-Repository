#include<stdio.h>
main()
{
int a[30],n,i;
printf("\nEnter size of the array: ");
scanf("%d",&n);
printf("\nEnter the values: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
}
