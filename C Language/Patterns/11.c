#include<stdio.h>
int main()
{
	int i,j;
	int	k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=i && j<=10-i && k)
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
