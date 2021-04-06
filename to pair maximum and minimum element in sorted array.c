/*to sort the array elements by arranging them as first max ,first min and sec max,sec min and so on*/
#include<math.h>
#include<stdio.h>
int
main ()
{
  int i, j, n, k = 0, temp, a[100], b[100];
  printf ("Enter the no of elements: ");
  scanf ("%d", &n);
  printf ("Enter the array elements:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  printf ("The array elements are:\n");
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a[i] > a[j])
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
    }
  for (i = 0; i < n; i++)
    printf ("%d ", a[i]);
  printf ("\nThe array elements by max and min are:\n");
  for (i = 0; i <= n / 2; i++)
    {
      if (i == n - i - 1)
	{
	  b[n - 1] = a[i];
	  break;
	}
      b[k] = a[n - 1 - i];
      b[k + 1] = a[i];
      k = k + 2;
    }
  for (i = 0; i < n; i++)
    printf ("%d ", b[i]);
  return 0;
}

