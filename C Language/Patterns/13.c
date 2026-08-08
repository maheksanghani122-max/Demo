#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((j>=5-i && j<=3+i && k==1) && (j>=i-3 && j<=11-i && k==1))
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

