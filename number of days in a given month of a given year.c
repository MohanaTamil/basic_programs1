#include<stdio.h>
int
main ()
{
  int year, month, days, n;
  printf ("\nEnter the month: ");
  scanf ("%d", &month);
  printf ("\nEnter the year: ");
  scanf ("%d", &year);
  printf ("\n");
  {
    if (month == 1)
      printf ("Number of days is %d", n = 31);
    else if (month == 2)
      {
	if (year % 400 == 0 ) 
	  printf ("Number of days is %d", n = 29);
	else if (year % 100 != 0)
	  printf ("Number of days is %d", n = 28);
	else  if (year % 4 == 0)
	  printf ("Number of days is %d", n = 29);
	else
	  printf ("Number of days is %d", n = 28);
      }
    else if (month == 3)
      printf ("Number of days is %d", n = 31);
    else if (month == 4)
      printf ("Number of days is %d", n = 30);
    else if (month == 5)
      printf ("Number of days is %d", n = 31);
    else if (month == 6)
      printf ("Number of days is %d", n = 30);
    else if (month == 7)
      printf ("Number of days is %d", n = 31);
    else if (month == 8)
      printf ("Number of days is %d", n = 31);
    else if (month == 9)
      printf ("Number of days is %d", n = 30);
    else if (month == 10)
      printf ("Number of days is %d", n = 31);
    else if (month == 11)
      printf ("Number of days is %d", n = 30);
    else if (month == 12)
      printf ("Number of days is %d", n = 31);
  }
  return 0;
}

