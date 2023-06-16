#include<stdio.h>
#include<math.h>
float areaRect()
{
int length,breadth;
printf("enter the length and breadth:");
scanf("%d %d", &length,&breadth);
return length*breadth;
}
float areaTri()
{
int s,s1,s2,s3;
printf("enter the sides of the triangle:");
  scanf("%d %d %d",&s1,&s2,&s3);
s = (s1+s2+s3)/2;
return sqrt(s*(s-s1)*(s-s2)*(s-s3));
}
float areaCirc()
{
int r;
printf("enter radius:");
scanf("%d",&r);
return 3.14*r*r;
}
int main()
{
int option;
float (*fn)();
float area;
printf("enter the corresponding number to find the area of:\n");
printf("1-Reactangle\n 2-Triangle\n 3-Circle\n");
scanf("%d",&option);
switch(option)
{
case 1:fn = &areaRect;
break;
case 2:fn = &areaTri;
break;
case 3:fn = &areaCirc;
break;
default:printf("invalid number");
return 0;
}
area = fn();
printf("the area is %.2f",area);
}
