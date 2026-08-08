#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a and b : ");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		printf("%d is maximum",a);
	}
	else
	{
		printf("%d is maximum",b);
	}
}
