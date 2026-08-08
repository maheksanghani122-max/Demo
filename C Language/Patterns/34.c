#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		char ch='A';
		for(j=1;j<=9;j++)
		{
			if(j>=i && j<=10-i)
			{
				printf("%c",ch);
				ch++;
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
