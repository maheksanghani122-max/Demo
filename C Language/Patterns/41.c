#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=29;j++)
		{
			if((j==1 || j==5) || (j==2 && i<=2) || (i==3 && j==3) || (j==4 && i<=2))
			{
				printf("*");
			}
			else if(j==7 || j==11 || (i==1||i==3)&&(j>=7&&j<=11))
			{
				printf("*");
			}
			else if(j==13 || j==17 || (i==3&&j>=13)&&j<=17)
			{
				printf("*");
			}
			else if(j==21 || (i==1 || i==5)&&(j>=19&&j<=23))
			{
				printf("*");
			}
			else if(j==25 ||j==29 || (i==1 && j==26) || (i==2 && j==26) || (i==3 && j==27) || (i==4 && j==28))
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
	
}
