#include<stdio.h>
int main()
{
	int i,length;
	char str[100];
	printf("Enter the string:\n");
	scanf(" %[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("The reversed string is :\n");
	for(i=length-1;i>=0;i--)
	{
	   printf("%c",str[i]);
}
return 0;
}
