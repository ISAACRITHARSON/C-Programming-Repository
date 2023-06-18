#include <stdio.h>

struct student
{
int regno;
char name[30];
int tot,s1,s2,s3;
int grade;

};
int main()
{
int i;
struct student s[3];
for(i=0;i<3;i++)
{
printf("enter the reg no:\t");
scanf("%d",&s[i].regno);
printf("enter the name of the student:\t");
scanf("%s",&s[i].name);
printf("Subject 1:");
scanf("%d",&s[i].s1);
printf("Subject 2:");
scanf("%d",&s[i].s2);
printf("Subject 3:");
scanf("%d",&s[i].s3);

};
for(i=0;i<3;i++)
{
printf("Name:%s\t",s[i].name);
printf("Register number:%d\t",s[i].regno);
printf("Subject 1:%d\t",s[i].s1);
printf("Subject 2:%d\t",s[i].s2);
printf("Subject 3:%d\t",s[i].s3);
s[i].grade=(s[i].s1+s[i].s2+s[i].s3)/3;
if(s[i].grade>=90)
printf("Grade A\n");
else if(s[i].grade>=80)
printf("Grade B\n");
else if(s[i].grade>=70)
printf("Grade C\n");
else if(s[i].grade>=60)
printf("Grade D\n");
else if(s[i].grade>=50)
printf("Grade E\n");
else if(s[i].grade>=40)
printf("Grade F\n");
}
return 0;
}
