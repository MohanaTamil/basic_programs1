#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ 
	x=i;
		for(j=1;j<=n;j++)
		{
			printf("%d ",x);
			x=x+n;
		}
		printf("\n");
	}
	return 0;
}
