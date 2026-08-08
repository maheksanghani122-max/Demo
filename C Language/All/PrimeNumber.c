#include<stdio.h>
int main()
{
	int num, temp=1;
	int i;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	if(num<=1)
	{
		temp==0;
	}
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			temp==0;
			break;
		}
	}
	if(temp==1)
	{
		printf("%d is prime number", num);
	}
	else
	{
		printf("%d is not prime number", num);
	}
}

