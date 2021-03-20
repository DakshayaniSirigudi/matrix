#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m=3,n=3;
	int **a;
	a=(int**)malloc(m*sizeof(int*));
	int i,j;
	for(i=0;i<m;i++)
	{
		a[i]=(int*)malloc(n*sizeof(int));
	}
	printf(" enter the matrix elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}
