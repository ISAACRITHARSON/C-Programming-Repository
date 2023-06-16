#include<stdio.h>
int swap(int a,int b)
{
printf("\nBefore swapping:a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping:a=%d b=%d\n",a,b);
}
main()
{
int a,b;
printf("Enter a & b: ");
scanf("%d%d",&a,&b);
swap(a,b);
}
