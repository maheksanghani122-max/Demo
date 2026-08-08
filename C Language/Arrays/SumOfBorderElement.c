#include<stdio.h>
int main()
{
	int r,c;
	int i,j;
	int sum=0;
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
			if(i==0||i==r-1||j==0||j==c-1)
			{
				sum+=arr[i][j];
			}
		}
		printf("\n");
	}
	printf("\nSum of all elements = %d",sum);

}
