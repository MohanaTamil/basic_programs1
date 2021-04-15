/*
#include<stdio.h>
int main()
{
int i,j,place,n,ele,a[100];
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to delete in the array: ");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
break;
}
for(j=i;j<n-1;j++)
  a[j]=a[j+1];
printf("After deletion:\n");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
return 0;
}
*/

#include<stdio.h>
int main()
{
int i,j,place,n,ele,a[100];
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the position where the element is to be deleted: ");
scanf("%d",&place);
for(i=place;i<=n-1;i++)
a[i]=a[i+1];
printf("After deletion:\n");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
return 0;
}
