#include<stdio.h>
int main()
{
	int num,first;
	printf("Enter Number = ");
	scanf("%d",&num);
	
	int last = num%10;
	while(num >= 10)
	{
		num = num/10;
	}
	first = num;
	int final = first + last;
	printf("Sum of %d and %d Digit = %d",first, last, final);
	return 0;
}
