/*
  * Prime NUmber

  -> ask user to enter a number
  -> check the number is prime or not
*/

#include <stdio.h>

int main()
{
    int number;
    int prime = 1;
    printf("enter a number : ");
    scanf("%d", &number);

    if (number <= 1) // 1 is not prime number 
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i <= number / 2; i++) // loop untilthe half of the number
        {
            if ((number % i) == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("the number %d is prime number\n", number);
    }
    else
    {
        printf("the number %d is not prime number \n", number);
    }

    return 0;
}