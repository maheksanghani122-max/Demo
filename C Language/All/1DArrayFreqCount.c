#include<stdio.h>
int main()
{
	int a[5]={1,2,3,1,5};
	int i,j,count;
	for(i=0;i<5;i++)
	{
		count=0;
		printf("%d",a[i]);
		for(j=0;j<5;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		printf("Frequency of %d = %d \n",a[i],count);
	}
}
