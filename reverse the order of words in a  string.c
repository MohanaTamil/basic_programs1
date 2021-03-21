#include<stdio.h>
int main()
{
	int i,length;
	char str[100];
	printf("Input string: ");
	scanf(" %[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("Reversed order of words :\n");
    for(i=length-1;i>=0;i--)
    {
    	if(str[i]==' ')
		{
		  str[i]='\0';
    	  printf("%s ",&(str[i])+1);
        }  
	}
	printf("%s",str);
	return 0;
}

