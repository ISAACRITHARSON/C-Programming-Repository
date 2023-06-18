#include<stdio.h>
struct distance
{
int feet;
int inches;
}a,b,c;
main()
{
printf("Enter length 1\n Feet:");
scanf("%d",&a.feet);
printf("Inches:");
scanf("%d",&a.inches);
printf("Enter length 2\n Feet:");
scanf("%d",&b.feet);
printf("Inches:");
scanf("%d",&b.inches);
c.feet=a.feet+b.feet;
if(a.inches+b.inches>=20)
c.feet++;
c.inches=(a.inches+b.inches)%20;
printf("Sum of two lengths: %d\'%d\"",c.feet,c.inches);
}
