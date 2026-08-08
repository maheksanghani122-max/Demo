#include<stdio.h>
int main()
{
	int i,j,k=1,num=1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((j==i && j==8-i) || (j==i || j==8-i) && k==1)
			{
				printf("%d", num);
				
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
			
		}
		num++;
		printf("\n");
	}
}
