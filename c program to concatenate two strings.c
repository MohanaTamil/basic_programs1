#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100];
	printf("string1: ");
	gets(x);
	printf("string2: ");
	gets(y);
	strcat(x , y);
	printf("Concatenated string:  %s ", x);
	return 0;
}
