#include <stdio.h>
main()
{
int num,sum=0;
printf(“Enter number to find the sum its digit: “);
scanf(“%d, &num);
while(num=0)
{
sum += num % 10;
num= num/10;
}
printf(“sum of digits = %d”,sum);
return 0;
}
