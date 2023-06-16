#include<stdio.h>
#include<string.h>
void up (char *a)
{
char b=toupper(*a);
*a=b;
}
main()
{
char a[100];
int i;
printf("enter a string\t");
scanf("%s", a);
int n=strlen(a);
printf("\narray before function call: %s\n", a);
for(i=0;i<n;i++)
up (&a[i]);
printf("\narray after function call: %s\n\n", a);
}
