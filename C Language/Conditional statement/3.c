#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter a, b, c, d : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
               printf("%d is maximum", a);
            }
			else
            {
            	printf("%d is maximum", d);
			}    
        }
        else
        {
            if(c>d)
            {
                printf("%d is maximum", c);
            }
			else
            {
            	printf("%d is maximum", d);
			}    
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("%d is maximum", b);
            }
			else
			{
                printf("%d is maximum", d);
			}
		}
        else
        {
            if(c>d)
            {
                printf("%d is maximum", c);
        	}
			else
			{
                printf("%d is maximum", d);
        	}
		}
    }

    return 0;
}
