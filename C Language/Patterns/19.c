#include<stdio.h>
int main()
{
	int i,j,k=1;

	for(i=1;i<=4;i++)
	{
		int num=1,count=0;

		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i && k==1)
			{
				printf("%d",num);
				k=0;
                num = num * (i - 1 - count) / (count + 1);
				count++;
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
