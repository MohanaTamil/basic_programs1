#include<stdio.h>
int main ()
{
  int i, j, a[20][20], m, n, sum = 0;
  m = n;
  printf ("Enter the number of rows and columns:\n");
  scanf ("%d %d", &m, &n);
  printf ("Enter the elements:\n");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  printf ("The elements in the matrix form:\n");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  printf ("%d ", a[i][j]);
	}
      printf ("\n");
    }
  printf ("The sum of elements in zig zag sequence: ");
  for (i = 1; i <= m; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  if ((i + j == n + 1) || i == 1 || i == n)
	    {
	      sum = sum + a[i][j];
	    }
	}
    }
  printf ("%d", sum);
  return 0;
}

