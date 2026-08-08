#include<stdio.h>
int main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(j<=i)
			{
				printf("%c",ch);		
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		ch++;
	}
}
