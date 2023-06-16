#include<stdio.h>
#include<ctype.h>
#include<string.h>
int conversion(char a[100])
{
int n,i;
n=strlen(a);
printf("\nThe string in uppercase\n");
for(i=0;i<n;i++)
printf("%c",toupper(a[i]));
printf("\nThe string in lowercase\n");
for(i=0;i<n;i++)
printf("%c",tolower(a[i])); }
main()
{ char a[100];
//int i;
printf("\nEnter the string");
scanf("%s",a);
conversion(a);}
