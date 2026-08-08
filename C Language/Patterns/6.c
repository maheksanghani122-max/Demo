/*#include<stdio.h>

int main()
{
	int i,j;
	for(i=1; i<= 5; i++)
	{
		for(j=1; j<= 9; j++)
		{
			if(j>= 6-i && j<= 4+i && (j+i)%2==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}*/
#include<stdio.h>

int main()
{
	int i,j;
	int k=1;
	for(i=1; i<= 5; i++)
	{
		for(j=1; j<= 9; j++)
		{
			if(j>= 6-i && j<= 4+i && k==1)
			{
				printf("*");
				k = 0;
			}
			else
			{
				printf(" ");
				k = 1;
			}
		}
		printf("\n");
	}
}
