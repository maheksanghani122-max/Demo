#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a and b and c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is maximum",a);
		}
		else
		{
			printf("%d is maximum",c);
		}
	}
	else
	{
		printf("%d is maximum",b);
	}
}
