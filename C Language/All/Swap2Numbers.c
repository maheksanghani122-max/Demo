// Using temp variable
/*#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter a and b = ");
	scanf("%d %d",&a,&b);

	temp = a;
	a = b;
	b = temp;
	printf("After Swapping : a = %d and b = %d",a,b);
}*/
// Without using temp variable 
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter a and b = ");
	scanf("%d %d",&a,&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After Swapping : a = %d and b = %d",a,b);

}
