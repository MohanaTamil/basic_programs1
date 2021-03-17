#include<stdio.h>
int main()
{
	int num,bin=0,place=1,rem=0;
	printf("Enter the no to convert decimal to binary:");
	scanf("%d",&num);
	printf("The converted binary no is:");
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		bin=bin+(rem*place);
		place=place*10;
	}
	printf("%d",bin);
	return 0;
}
