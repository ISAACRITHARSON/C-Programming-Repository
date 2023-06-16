#include<stdio.h>
float avg(int a[],int n)
{
float sum=0,avg;
int i;
for(i=0;i<n;i++)
sum=sum+a[i];
avg=sum/n;
printf("\nThe aveerage value =%.2f",avg);
} main()
{ int i,a[20],n;
printf("\nEnter the limit");
scanf("%d",&n);
printf("\nEnter the values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
avg(a,n);
}
