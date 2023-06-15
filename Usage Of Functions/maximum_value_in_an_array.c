/PROGRAM TO FIND THE MAXIMUM VALUE IN AN ARRAY
#include<stdio.h>
float max(float a[],int n)
{
float max=0;
int i;
for(i=0;i<n;i++)
if(a[i]>max)
max=a[i];
printf("\nThe maximun value=%f",max);
}
main()
{
float a[20];
int n,i;
printf("\nEnter the limit");
scanf("%d",&n);
printf("\nEnter the values");
for(i=0;i<n;i++)
scanf("%f",&a[i]);
max(a,n);
}
