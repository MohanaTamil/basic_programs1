#include<stdio.h>
#include<string.h>
int main ()
{
  int i, j, count = 0, n, k;
  char a[100];
  printf ("Enter the str: ");
  scanf (" %[^\n]s", a);
  n = strlen (a);
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a[i] == a[j])
	    {
	      /*delete duplicate element in this loop or move the nxt element inplace of the duplicate element */
	      for (k = j; k < n; k++)
		{
		  a[k] = a[k + 1];
		}
	      /*decrease the size */
	      n--;
	      /*decrease the value of j if shifting of elements not occur */
	      j--;

	    }
	}
    }
  for (i = 0; i < n; i++)
    {
      if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
	{
	  count = count + 1;
	}
    }
  if (count == 26)
    printf ("\nIt is a pangram.");
  else
    printf ("\nIt is a not a pangram.");
  return 0;
}
