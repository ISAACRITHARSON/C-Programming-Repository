//NUMBER OF VOWELS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count(char a[100])
{
int i,count=0;
for (i=0;i<strlen(a);a++)
switch(a[i])
{ case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
count=count+1;
break;
}
printf("\nVowels:%d/n",count);
}
main()
{
char a[100];
printf("String:");
scanf("%s",a);
count(a);
}
