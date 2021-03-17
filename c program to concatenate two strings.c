#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100];
	printf("Input string1: ");
	gets(x);
	printf("Input string2: ");
	gets(y);
	strcat(x , y);
	printf("Concatenated string:  %s ", x);
	return 0;
}
