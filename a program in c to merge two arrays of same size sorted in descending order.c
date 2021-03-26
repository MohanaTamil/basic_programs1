#include<stdio.h>
int main ()
{
  int n1, n2, n3, i, j, k, a1[100], a2[100], a3[100], temp;
  n1 = n2;
  printf ("Input the number of elements to be stored in the first array :");
  scanf ("%d", &n1);
  printf ("Input %d elements in the array :\n", n1);
  for (i = 0; i < n1; i++)
    {
      printf ("element-%d :", i);
      scanf ("%d", &a1[i]);
    }
  printf ("\nInput the number of elements to be stored in the second array :");
  scanf ("%d", &n2);
  printf ("Input %d elements in the array :\n", n2);
  for (j = 0; j < n2; j++)
    {
      printf ("element-%d :", j);
      scanf ("%d", &a2[j]);
    }
  n3 = n1 + n2;

  for (i = 0; i < n1; i++)
    {
      a3[i] = a1[i];
    }
  for (j = 0; j < n2; j++)
    {
      a3[i] = a2[j];
      i++;
    }

  for (i = 0; i < n3; i++)
    {
      for (k = i + 1; k < n3; k++)
	{
	  if (a3[k] >= a3[i])
	    {
	      temp = a3[i];
	      a3[i] = a3[k];
	      a3[k] = temp;
	    }
	}
    }
  printf ("\nThe merged array in descending order is:\n");
  for (i = 0; i < n3; i++)
    {
      printf ("%d ", a3[i]);
    }
  return 0;
}

