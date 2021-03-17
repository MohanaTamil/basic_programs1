#include<stdio.h>
int main()
{
	int i,j,a=0,b=1,c,n;
	printf("Enter the limit:\n");
	scanf("%d",&n);
	printf("The fibbonacci triangle is:\n");
	for(i=1;i<=n;i++)
	{	
	a=0;
	b=1;
	printf("%d\t",b);
	for(j=1;j<i;j++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	printf("\n");
}
return 0;
	
	
}
