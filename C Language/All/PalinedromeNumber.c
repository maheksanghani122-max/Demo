#include<stdio.h>
int main()
{
	int num, rem, rev;
	printf("Enter Number = ");
	scanf("%d", &num);
	int org = num;
	while(num>0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num/=10;
	}
	if(org == rev)
	{
		printf("%d is Palinedrome Number",org);
	}
	else
	{
		printf("%d is not Palinedrome Number",org);
	}
}
