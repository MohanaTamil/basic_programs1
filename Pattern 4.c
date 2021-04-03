#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
