/*
Write a C program that takes an integer from the user and extracts (n) bits starting

from a specific bit position.

Description: The program should prompt the user to enter a number, a starting

position, and the number of bits to be retrieved. It must then isolate that specific

sequence of bits from the original value and display the resulting number on the

screen. The other bits in the number should not affect the final output.
*/

#include <stdio.h>

int main()
{
    unsigned int number, n, possition;
    // user enter a number
    printf("enter a number : ");
    scanf("%u", &number);

    // number of bits extract
    printf("number of bits extract : ");
    scanf("%d", &n);

    // staring position
    printf("enter starting possition : ");
    scanf("%d", &possition);

    // extract bit
    /* number = 8 => 0000 1000
    postion   = 2
    n         = 3
                  7 6 5 4  3 2 1 0   -> index
              =>  0 0 0(0  1 0)0 0   -> postion 2 => 0 1 0 => 2
              =>  0 0 0 0  0 0 1 0   -> right shit 2 <---------------------
              =>  0 0 0 0  1 0 0 0   -> (1<<n) => (1<<3) -> 8             |
         mask =>  0 0 0 0  0 1 1 1   -> (1<<n)1 => (1<<3)-1 -> 7<----------
         -----------------------------------------------------------------------
            & =>  0 0 0 0  0 0 1 0   -> 2

    */
    unsigned int new_bit = ((number >> possition) & (1 << n) - 1);

    // disply the number
    printf("number \"%u\" after \"%d\" of bits  extract from position \"%d\" is : %u \n", number, n, possition, new_bit);
    return 0;
}