//#include<stdio.h>
//int main()
//{
//	int i,j,n=2,k,prime;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			prime=1;
//			if(n<2)
//			{
//				prime=0;
//			}
//			for(k=2;k<=n/2;k++)
//			{
//				if(n%k==0)
//				{
//					prime=0;
//					break;
//				}
//			}
//			if(j<=i && prime==1)
//			{
//				printf("%d",n);
//				
//			}
////			else
////			{
////				printf(" ");
////			}	
//			n++;
//		}
//		printf("\n");
//	}
//}
#include<stdio.h>

int main()
{
    int i,j,n=2,k,prime;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            while(1)
            {
                prime=1;

                for(k=2;k<n;k++)
                {
                    if(n%k==0)
                    {
                        prime=0;
                        break;
                    }
                }

                if(prime==1)
                {
                    printf("%d ",n);
                    n++;
                    break;
                }

                n++;
            }
        }
        printf("\n");
    }

    return 0;
}
