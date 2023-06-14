#include<stdio.h>
main()
{
int a[100],n,i,d,swap;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(d=0;d<n-i-1;d++)
{
if(a[d]>a[d+1])
{
swap=a[d];
a[d]=a[d+1];
a[d+1]=swap;
}
}
}
printf("Sorted list in ascending order:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
} 
