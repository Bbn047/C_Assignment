/*
 * Factorial of he given number
 */

#include <stdio.h>

int main()
{
    int number;
    int sum = 1;
    printf("enter a number : ");
    scanf("%d", &number);

    if (number > 0)
    {
        // loop until reach given number
        for (int i = 1; i <= number; i++)
        {
            sum = (sum * i); // multiply i value with sum
        }
    }
    printf("factorial of thr given number %d is : %d", number, sum);

    return 0;
}