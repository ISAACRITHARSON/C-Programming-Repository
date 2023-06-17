#include<stdio.h>
int sec_maxpos(float a[],int n)
{
float max,sec_max;
int i,maxpos=1,secpos=0;
max=a[1];
sec_max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
sec_max=max;
max=a[i];
secpos=maxpos;
maxpos=i;
}
else if(a[i]>sec_max&&a[i]!=max)
{
sec_max=a[i];
secpos=i;
}
}
return secpos;
}
main()
{
float a[10];
int i,pos;
printf("Enter 10 values: ");
for(i=0;i<10;i++)
scanf("%f",&a[i]);
pos=sec_maxpos(a,10);
printf("Index of 2nd largest value:%d\n",pos);
}
