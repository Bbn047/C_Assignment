/*
 Fibinocci Series
 -> get the legnth from user
 -> print the fibinocci series
*/
#include <stdio.h>

int main()
{

    int number;
    int first_number = 0, second_number = 1, sum = 0;
    printf("enter a number for print the fibinocci series : ");
    scanf("%d", &number);

    // checking the given number is -ve or +ve integer
    if (number <= 0)
    {
        printf("error negative number");
    }
    else
    {
        printf("Fibinocci Series : ");

        // loop until the given number
        for (int i = 0; i < number; i++)
        {
            // print first number
            if (i == 0)
            {
                printf("%d ", first_number);
                continue;
            }
            // print second number
            if (i == 1)
            {
                printf("%d ", second_number);
                continue;
            }

            // find the third number and updating the first and second number
            sum = first_number + second_number;
            first_number = second_number;
            second_number = sum;
            printf("%d ", sum);
        }
    }

    return 0;
}