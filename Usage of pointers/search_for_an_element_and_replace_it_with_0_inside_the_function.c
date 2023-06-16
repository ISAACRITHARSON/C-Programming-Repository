#include<stdio.h>
int arrzero(int *a, int *b, int *c)
{
int i;
for(i=0;i<*c;i++)
{
if(*a==*b)
return *a;
a++;
}
}
main()
{
int b,c,i, zero;
printf("\nhow many elements in the array?");
scanf("%d", &c);
int a[c];
printf("\nenter the elements of the array:\t");
for(i=0;i<c;i++)
scanf("%d",&a[i]);
printf("what number must be replaced by zero?");
scanf("%d",&b);
printf("array before function call: ");
for(i=0;i<c;i++)
printf("%d ", a[i]);
zero=arrzero(a, &b,&c);
for(i=0;i<c;i++)
{
if(a[i]==zero)
a[i]=0;
}
printf("\n\narray after function call: ");
for(i=0;i<c;i++)
printf("%d ", a[i]);
printf("\n\n");
}
