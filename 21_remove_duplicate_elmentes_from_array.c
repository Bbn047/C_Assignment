/*
Write a C program to remove duplicate elements from a given array.

Description: The program should prompt the user to enter the size of the array and its

elements. It must then identify and remove any duplicate values, ensuring that each

element appears only once in the resulting array. The program should finally display

the updated array containing only unique elements.
*/
#include <stdio.h>

int main()
{
    int n;
    // enter the array size
    printf("enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    // get value ti array
    printf(" enter the array elemnts : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // checking duplicate values
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // if duplicates found
            if (arr[i] == arr[j])
            {
                // shift elemente to the left
                for (int k = j; k < n-1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce array size
                j--; // reduce j for check the currnt possition again
            }
        }
    }

    // display final output array
    printf("array after remove duplicate numbers : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}