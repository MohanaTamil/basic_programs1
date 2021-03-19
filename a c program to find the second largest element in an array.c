#include<stdio.h>
int main()
{
	int a[100],i,first_large,second_large,temp,n;
	printf("Input the size of array: ");
	scanf("%d",&n);
	printf("Input 5 elements in an array\n");
	
	for(i=0;i<n;i++)
	 {
	    printf("element-%d: ",i);
	 	scanf("%d",&a[i]);	
	 }
	 for(i=0;i<n;i++)
	 
	 first_large=a[0];
	 second_large=a[1];
	 if(second_large>first_large)
	 {
	 	temp=second_large;
	 	second_large=first_large;
	 	first_large=temp;
	 }
	 for(i=2;i<n;i++)
	 {
	 	if(a[i]>first_large)
	 	{   
	 	    temp=second_large;
	 		second_large=first_large;
	 		first_large=a[i];
		 }
		 else if(a[i]>second_large)
		 {
		  temp=second_large;
		  second_large=a[i];
	}
	 }
	 printf("The second largest element in the array is: %d",second_large);
	 return 0;
}
