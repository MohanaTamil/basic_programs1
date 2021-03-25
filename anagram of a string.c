#include<stdio.h>
#include<string.h>
int
main ()
{
  int i, j, len, len1, len2, temp1,temp2,flag=0 ,count = 0;
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
	for(i=0;i<len1-1;i++)
	  {
	  	flag=0;
	  	for(j=0;j<len1-1-i;j++)
	  	{
	  		if(s1[j]>s1[j+1])
	  		{
	  			temp1=s1[j];
	  			s1[j]=s1[j+1];
	  			s1[j+1]=temp1;
	  			count++;
			  }
		  }
		  if(count==0)
		   break;
	}
   for(i=0;i<len2-1;i++)
	  {
	  	flag=0;
	  	for(j=0;j<len2-1-i;j++)
	  	{
	  		if(s2[j]>s2[j+1])
	  		{
	  			temp2=s2[j];
	  			s2[j]=s2[j+1];
	  			s2[j+1]=temp2;
	  			flag++;
			  }
		  }
		  if(flag==0)
		   break;
	}}
	if(s1[j]==s2[j])
	 printf("Yes,It is an anagram");
	else
	 printf("No,it is not an anagram");
	return 0;
}
	
