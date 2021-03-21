#include<stdio.h>
#include<string.h>
int
main ()
{
  int i, j, len, len1, len2, count = 0, not_take = 0;
  char s1[100], s2[100];
  printf ("Enter the string1:\n");
  scanf (" %[^\n]s", s1);
  printf ("Enter the string2:\n");
  scanf (" %[^\n]s", s2);
  len1 = strlen (s1);
  for (i = 0; i < len1; i++)
    {
      if (s1[i] >= 'A' && s1[i] <= 'Z')
	{
	  s1[i] = s1[i] + 32;
	}
    }
  len2 = strlen (s2);
  for (j = 0; j < len2; j++)
    {
      if (s2[j] >= 'A' && s2[j] <= 'Z')
	{
	  s2[j] = s2[j] + 32;
	}
    }
  if (len1 != len2)
    {
      printf ("\nNo,It is not a anagram");
    }
  else
    {
      for (i = 0; i < len1; i++)
	{
	  count = 0;
	  for (j = 0; j < len2; j++)
	    {
	      if (s1[i] == s2[j])
		{
		  count = 1;
		  break;
		}
	    }
	  if (count == 0)
	    {
	      not_take = 1;
	      break;
	    }
	}

      if (not_take == 1)
	printf ("\nN0,it is not a anagram");
      else
	printf ("\nYes,it is  a anagram");
    }
  return 0;

}

