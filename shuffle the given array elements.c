#include<stdio.h>
int
main ()
{
  int i, j, n, temp, a[100];
  printf ("Enter the no of elements: ");
  scanf ("%d", &n);
  printf ("Enter the array elements:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  printf ("The array elements are:\n");
  for (i = 0; i < n; i++)
    printf ("%d ", a[i]);
  printf ("\n");
  printf ("The shuffled array elements are:\n");
  for (i = 0; i < n / 2; i++)
    printf ("%d %d ", a[i], a[i + n / 2]);
  return 0;
}
