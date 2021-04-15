#include<stdio.h>
int main()
{
	int i,j,a[100],b[100],n,k,count=0,temp;
	printf("Enter the no of array elements: ");
	scanf("%d",&n);
	printf("\nEnter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count=count+1;
		}
		b[k]=count;
		k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{ 
			if(b[i]>b[j])
			{
		       temp=b[i];
		       b[i]=b[j];
		       b[j]=temp;
		       temp=a[i];
		       a[i]=a[j];
		       a[j]=temp;
		       
			}
		}
	}
	printf("\nThe arranged elements in the frequency order\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
return 0;
}
