#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("Input string : ");
	gets(s);
	printf("Strings or words after split by space are : \n");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		printf("\n");
		else
		printf("%c",s[i]);
	}
	return 0;
}
