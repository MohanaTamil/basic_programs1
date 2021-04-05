#include<stdio.h>
int max (int n, int a[100]);
int main ()
{
  int n, a[100], i, j, big;
  printf ("Enter the no of elements :");
  scanf ("%d", &n);
  printf ("Enter the array elements\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  big = max (n, a);
  printf ("The maximum number is: %d", big);
  return 0;
}
int max (int n, int a[100])
{
  int i, j, temp;
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a[j] > a[i])
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
    }
  return a[0];
}

