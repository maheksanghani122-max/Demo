#include<stdio.h>
int main()
{
	int i,j,num=1,n=4;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				printf("%d",n);
			}
			else if(i+j==n-2 || i+j==n+2)
			{
				printf("%d",n-1);
			}
			else if(i+j==n-3 || i+j==n+1)
			{
				printf("%d",n-2);
			}
			else if(i+j==n-4 || i+j==n)
			{
				printf("%d",n-3);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
