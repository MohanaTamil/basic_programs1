#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i,alpha=0,digits=0,specialcharacters=0;
   printf("\nInput String : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++)
    {
      if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
      {
      	alpha++;
	  }
	  else if(s[i] >= '0' && s[i] <= '9')
	  {
	  	digits++;
	  }
	  else
	  {
	  	specialcharacters++;
	  }
}
printf("Alphabets : %d\n",alpha);
printf("Digits : %d\n",digits);
printf("Special characters : %d\n",specialcharacters);
return 0;
}
