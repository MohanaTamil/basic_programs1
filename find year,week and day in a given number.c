#include<stdio.h>
int main()
{
int n,year,week,days;
printf("Enter the no : ");
scanf("%d",&n);
year=n/365;
week=(n%365)/7;
days=(n%365)%7;
printf("%d = %d years, %d weeks and %d days",n,year,week,days);
return 0;
}
