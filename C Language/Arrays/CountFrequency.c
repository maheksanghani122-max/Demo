//#include<stdio.h>
//int main()
//{
//    int a[3][3],b[100],i,j,k = 0,ctr,fr1[100];
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<3; j++)
//        {
//            printf("Enter value of a[%d][%d] = ",i,j);
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<3; j++)
//        {
//            b[k] = a[i][j];
//            fr1[k] = -1;
//            k++;
//        }
//    }
//    for (i = 0; i < k; i++)
//    {
//        ctr = 1;
//        for (j = i + 1; j < k; j++)
//        {
//            if (b[i] == b[j])
//            {
//                ctr++;
//                fr1[j] = 0; 
//            }
//        }
//        if (fr1[i] != 0)
//        {
//            fr1[i] = ctr;
//        }
//    }
//    for (i = 0; i < k; i++)
//    {
//        if (fr1[i] != 0)
//        {
//            printf("%d occurs %d times\n", b[i], fr1[i]);
//        }
//	}
//}
#include <stdio.h>

int main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;

    // Prompt user for input
    printf("\n\nCount frequency of each element of an array:\n");
    printf("------------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        fr1[i] = -1; // Initialize frequency array with -1
    }

    // Count the frequency of each element in the array
    for (i = 0; i < n; i++)
    {
        ctr = 1; // Initialize counter for each element
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                ctr++;     // Increment counter for matching elements
                fr1[j] = 0; // Mark the duplicate element's frequency as 0
            }
        }

        // If frequency array value is not marked as 0, set it to the counter
        if (fr1[i] != 0)
        {
            fr1[i] = ctr;
        }
    }

    // Print the frequency of each element in the array
    printf("\nThe frequency of all elements of the array : \n");
    for (i = 0; i < n; i++)
    {
        if (fr1[i] != 0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
	}
	return 0;
} 
