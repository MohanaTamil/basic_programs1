#include<stdio.h>
#include<string.h>
int
main ()
{
  int i, k, l1, l2;
  char s1[50], s2[50];
  printf ("Enter the string\n");
  scanf (" %[^\n]s", s1);
  printf ("Enter substring to check\n");
  scanf (" %[^\n]s", s2);
  l1 = strlen (s1);
  l2 = strlen (s2);
  for (i = 0; i < l1; i++)
    {
      for (k = 0; k < l2; k++)
	{
	  if (s1[i + k] != s2[k])
	    {
	      break;
	    }
	}
      if (k == l2)
	{
	  printf ("Substring is present");
	  break;
	}
      else if (i == l1 - 1)
	{
	  printf ("substring is not present");
	}
    }
  return 0;
}

