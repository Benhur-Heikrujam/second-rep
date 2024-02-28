#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,k,a[10][10],b[10][10],m[10][10],r,c,sum=0;
	printf("enter row size and column size respectively:\n");
	scanf("%d %d",&r,&c);
	printf("Enter the elements of first matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter the elements of second matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			sum=0;
			for (k=0;k<c;k++)
			{
				sum+=(a[i][k]*b[k][j]);
			}
			m[i][j]=sum;
		}
	}
	printf("\nProduct of two matrices is\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
}