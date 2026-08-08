#include<stdio.h>
int main()
{
	int num,rem,rev,rev2=0,sum=0;
	printf("Enter Number = ");
	scanf("%d", &num);
	int org = num;
	while(num>0)
	{
		rem = num%10;
		sum+=rem;
		num/=10;
	}
	int org2 = sum;
	while(sum>0)
	{
	    rev = sum%10;
	    rev2 = rev2*10+rev;
	    sum/=10;
	}
	if((org2 * rev2)==org)
    {
        printf("%d is Magic Number",org);
    }
    else
    {
    	printf("%d is not Magic Number",org);
	}
}
