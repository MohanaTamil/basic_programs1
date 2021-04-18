#include<stdio.h>
int main ()
{
  int i, j, r, c, sum = 0, a[20][20];
  printf ("Enter the no of rows and columns:\n");
  scanf ("%d %d", &r, &c);
  printf ("Enter the array elements");
  for (i = 1; i <= r; i++)
    for (j = 1; j <= c; j++)
      scanf ("%d", &a[i][j]);
  printf ("\nThe array elements are : \n");
  for (i = 1; i <= r; i++)
    {
      for (j = 1; j <= c; j++)
	{
	  printf ("%d ", a[i][j]);
	}
      printf ("\n");
    }
  for (i = 1; i <= r; i++)
    {
      for (j = 1; j <= c; j++)
	{
	  if (i == 1 || j == 1 || i == r || j == c)
	    {
	      sum = sum + a[i][j];
	    }
	}
    }
  printf ("\nSum of boundary elements : %d", sum);
  return 0;
}
