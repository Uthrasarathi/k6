#include<stdio.h>
void main()
{
int year;
printf("Enter the year\n");
scanf("%d",&year);
if((year%400==0) || (year%4==0))
{
printf("Leap year");
}
else
if(!year%100==0)
{
printf("not a leap year\n");
}
else
{
printf("\n");
}
getch();
}
