#include<stdio.h>
int main()
{
	int r,c;
	int i,j;
	
	printf("Enter no. of row and column = ");
	scanf("%d %d",&r,&c);
	int arr[r][c];

	printf("Enter Elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[j][i]);
			
		}
		printf("\n");
	}
}
