#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter the value of m : ");
	scanf("%d",&m);
		printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d %d ",j,i);
		}
	printf("\n");
	}
	return 0;
}
