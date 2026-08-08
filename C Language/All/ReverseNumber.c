#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("Enter Number :");
	scanf("%d", &num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
		
	}	
	printf("%d",rev);
}	
