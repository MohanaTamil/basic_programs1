#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10],b[10][10];
	printf("Input the rows and columns of the matrix: ");
	scanf("%d %d",&m,&n);
	printf("Input elements in the matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("elements-[%d],[%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	      printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of a matrix is:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	      printf("%d ",b[i][j]);
        }
        printf("\n");
    }
	return 0;
	
}
