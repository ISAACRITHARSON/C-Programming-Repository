#include<stdio.h>
int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
main()
{
int ncr,n,r;
printf("Enter n and r(n>r): ");
scanf("%d%d",&n,&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("%d\n",ncr);
}
