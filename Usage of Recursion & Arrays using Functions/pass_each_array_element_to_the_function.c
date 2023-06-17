#include<stdio.h>
int disp(int *element)
{
printf("%d\t",*element);
}
main()
{
int a[10],n,i;
printf("Number of elements: ");
scanf("%d",&n);
printf("Elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The elements are: ");
for(i=0;i<n;i++)
disp(&a[i]);
}
