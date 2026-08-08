#include<stdio.h>
int main()
{
	int i,j,num=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			if((i==1 || j==1 ) || (i==4 || j==3))
			{
				printf("3");
			}
			else
			{
				printf("%d",num);
			}
		}
		printf("\n");
		num++;

	}
}
