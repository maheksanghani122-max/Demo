#include<stdio.h>
int main()
{
	int num ,temp,n=0,rem;
	
 	printf("Enter Number = ");
 	scanf("%d",&num);
 	int oringnal = num;
	while(num>0)
	{
		rem = num%10;
		temp = (rem*rem*rem);
		n += temp;
		num/=10; 
	}
	
	if(oringnal == n)
	{
		printf("%d is armstromg number", n);
	}
	else
	{
		printf("Not armstrong number");
	}
	
    return 0;
}
