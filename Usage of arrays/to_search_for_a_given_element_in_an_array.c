#include<stdio.h>
main()
{
int a[10],m,i,find=0,search,index;
printf("\nEnter the number of elements in the array: ");
scanf("%d",&m);
printf("\nEnter the elements of the array: ");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched: ");
scanf("%d",&search);
for(i=0;i<m;i++)
if(search==a[i])
{
index=i;
find=1;
break;
}
if(find)
printf("\nThe element is located in the index %d",index);
else
printf("\nThe element is unavailable");
}
