#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((j>=i && j<=10-i && k==1) || (j>=10-i &&  j<=i && k==1))
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
