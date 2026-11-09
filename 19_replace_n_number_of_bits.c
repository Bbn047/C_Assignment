/*Write a C program that takes a number and replaces n of its bits, starting from a

given position, with another set of n bits from a second number.

Description: The program should prompt the user to enter two integers, a starting bit

position, and the number of bits n to be modified. It must then clear $n$ bits in the first number at the specified position and replace them with the corresponding $n$

bits from the second number. The final resulting value should be displayed on the

screen while all other bits in the first number remain unchanged.*/

#include <stdio.h>

int main()
{
    unsigned int number1, number2;
    int n, position;
    // enter first number
    printf("enter a number : ");
    scanf("%u", &number1);

    // enter number 2
    printf("enter second number : ");
    scanf("%u", &number2);

    // starting poistion
    printf("enter the starting possition : ");
    scanf("%d", &position);

    // number of bits
    printf("no of bits : ");
    scanf("%d", &n);

    // clear bit
    /*
       number = 8
       position = 2
       n        = 3
                => 7 6 5 4  3 2 1 0
                => 0 0 0 0  1 0 0 0 -> 8
       (1<<n)-1 => 0 0 0 0  0 1 1 1 -> 7
                => 0 0 0 1  1 1 0 0 -> << position -> 2 left shift

     */
    unsigned mask_bit = (((1 << n)-1) << position);

    // clear number1 bits
    /* 0 0 0 0  1 0 0 0  -> 8  -------
       0 0 0 1  1 1 0 0  -> mask_bit     |
       1 1 1 0  0 0 1 1  -> ~mask_bit     |
       ---------------------- &  -----
       0 0 0 0  0 0 0 0   -> 0
    */
    unsigned int clear_number1 = number1 & ~mask_bit;

    // isolate corresponding bits from number 2
    /* number2 = 0 0 0 1  0 0 0 0  -> 4
       mask    = 0 0 0 1  1 1 0 0  -> mask_bit
           ----------------------------  &
                 0 0 0 1  0 0 0 0    -> 32
    */
    unsigned int corresponding_bits = ((number2<<position) & mask_bit);

        // combine clear number1 bit with new bit
        /*
            0 0 0 0  0 0 0 0    -> 0
            0 0 0 1  0 0 0 0    -> corresponding_bit
            -----------------
            0 0 0 1  0 0 0 0    -> 32
         */
        unsigned int final_result = (clear_number1 | corresponding_bits);

    printf("the final result is : %u", final_result);

    return 0;
}