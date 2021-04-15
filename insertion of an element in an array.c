#include<stdio.h>
int main()
{
int i,j,place,n,ele,a[100];
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to insert in the array: ");
scanf("%d",&ele);
printf("Enter the position where the element is to be inserted: ");
scanf("%d",&place);
n++;
for(i=n-1;i>=place;i--)
a[i]=a[i-1];
a[place]=ele;
printf("After insertion:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
