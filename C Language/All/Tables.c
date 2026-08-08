#include<stdio.h>
int main()
{
	int i,j,mul,n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=10; j++)
		{
			mul=i*j;
			printf("%d * %d = %d\n",i,j,mul);
		}
		printf("\n");
	}
}
