#include<stdio.h>

int main()
{
    int i,j,num;
    int k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("%d",i);
            }
            else
            {
                 num=5;

                 for(k=2;k<=j;k++)
                 {
                     num += (6-k);
                 }

                 printf(" %d",num-(i-j));

                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
