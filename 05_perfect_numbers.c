/*
  * print perfect numbers
  -> get input from user
  -> write a function for check the number is perfect number or not
  -> retrun whether the sum is equal to the orginal number
  -> print the output
*/

#include <stdio.h>
int perfect_number(int num)
{
    int sum = 0;

    // computing the sum of all perfect devisors
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{

    int number;
    printf("enter a number :  ");
    scanf("%d", &number);

    // numbers below  1 is not perfect numbers
    if (number <= 1)
    {
        printf("the number is %d not perfect number ", number);
    }
    else
    {
        // calling the function for check the number
        int result = perfect_number(number);

        // checking the return value equal to giiven number
        if (result == number)
        {
            printf("number %d is perfect number \n", number);
        }
        else
        {
            printf("number %d is not perfect number\n", number);
        }
    }

    return 0;
}