#include<stdio.h>
int main()
{
	int a,b,gcd,i,lcm;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		  gcd=i;
	}
	lcm=(a*b)/gcd;
	printf("The lcm of %d and %d is:%d",a,b,lcm);
	return 0;
}
