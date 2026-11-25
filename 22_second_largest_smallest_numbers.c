/*
Write a C program that uses an array to find the second largest and second

smallest element in a list of numbers.

Description: The program should prompt the user to enter the size of the array and its

elements. It must then scan through the array and determine both the second largest

and second smallest values ​​without sorting the array. The program should handle

duplicate values ​​correctly — if all elements are the same, it should display an

appropriate message. Both results should be displayed on the screen.
*/

#include <stdio.h>

int main()
{
    int n;
    // user input array size
    printf("enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    //enter the array elements
    printf("enter the array elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sort array from smallest to highest vlaue
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
            }
        }
    }
    return 0;
}