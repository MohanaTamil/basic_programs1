#include<stdio.h>
#include<stdbool.h>
bool ishappy(int n)
{
int r,sum=0;
int res;
  while(n!=1&&n!=4)
  {
  while(n!=0)
  {
  	r=n%10;
  	sum=sum+(r*r);
  	n=n/10;
  }
  n=sum;
   sum=0;
}
    if(n==1)
  	  res =1;
  	else
  	  res =0;
  	return res;
}
int main()
{
  int n;
  int output,i;
     printf("Enter the no:");
     scanf("%d",&n);
     output = ishappy(n);
     printf("%d",output);
     return 0;
}

