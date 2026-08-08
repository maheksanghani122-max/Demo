#include<stdio.h>
int main()
{
	int r,c,sum=0;
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
			printf("%d ",arr[i][j]);
			if(i+j == c-1 )
			{
				sum+=arr[i][j];
			}
			
		}
		printf("\n");
	}
	printf("Sum of Diagonal elements = %d",sum);
}
