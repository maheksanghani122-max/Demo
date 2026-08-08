#include<stdio.h>
int main()
{
	int n,i,fac;
	printf("Enter n = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("%d",fac);
}
