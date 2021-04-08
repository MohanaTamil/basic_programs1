#include<stdio.h>
int main ()
{
  int i, j, n, x = 1;
  printf ("Enter the number: ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
	{
	  if ((i + j) >= (n + 1))
	    {
	      printf ("%3d ", x * x);
	      x++;
	    }
	  else
	    printf ("    ");
	}
      printf ("\n");
    }
  return 0;
}

