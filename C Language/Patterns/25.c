#include<stdio.h>
int main()
{
    int i, j, num = 10, count, r;

    for(i = 1; i <= 4; i++)
    {
        count = 5 - i;     
        r = num;         

        for(j = 1; j <= 4; j++)
        {
            if(j <= count)
            {
                if(i % 2 == 0)
                {
                    printf("%d ", r - count + j);
                }
                else
                {
                    printf("%d ", num);
                }
                num--;  
            }
            else
            {
                printf(" "); 
            }
        }
        printf("\n");
    }
    return 0;
}
