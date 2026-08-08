#include<stdio.h>
int main()
{
	int i,j,num=1,position=1;
	char ch='B';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=i)
			{		
				if(position%2==0)
				{
					printf("%c",ch);
					ch+=2;
				}
				else
				{
					printf("%d",num);
					num+=2;
				}
				position++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
