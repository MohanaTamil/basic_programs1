#include<stdio.h>
int main ()
{
  int i, j, n1, n2, k, n, a[30], b[30], c[30];
  printf ("Enter the no of elements in array 1: ");
  scanf ("%d", &n1);
  printf ("Enter the no of elements in array 2: ");
  scanf ("%d", &n2);
  printf ("Enter the n1 elements\n");
  for (i = 0; i < n1; i++)
    {
      scanf ("%d", &a[i]);
      c[i] = a[i];
    }
  n = i;
  printf ("Enter the n2 elements\n");
  for (j = 0; j < n2; j++)
    {
      scanf ("%d", &b[j]);
      c[n] = b[j];
      n++;
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (c[i] == c[j])
	    {
	      for (k = j; k < n; k++)
		{
		  c[k] = c[k + 1];
		}
	      n--;
	      j--;
	    }
	}
    }
  printf ("\nAfter merging without duplicates\n");
  for (i = 0; i < n; i++)
    printf (" %d ", c[i]);
    return 0;
}

