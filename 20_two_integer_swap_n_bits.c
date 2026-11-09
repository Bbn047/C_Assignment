/*
position in both numbers.

Description: The program should prompt the user to enter two integers, a starting bit

position, and the number of bits (n) to be swapped. It must then exchange the n

consecutive bits at the specified position between the two numbers - the bits from

the first number go into the second, and vice versa — while all remaining bits in both

numbers stay exactly as they were. Both final values ​​should be displayed on the

screen after the swap.
*/

#include <stdio.h>

int main()
{
    unsigned int number1, number2;
    int n, possition;

    // enter first number
    printf("enter first number : ");
    scanf("%u", &number1);

    // second number
    printf("enter the second number : ");
    scanf("%u",& number2);

    // enter the no.of bits
    printf("enter the number of bits to swap : ");
    scanf("%d", &n);

    // starting position
    printf("enter the starting possition : ");
    scanf("%d", &possition);

    // creating mask for the gien bits
    /*
      n         = 3
      possition = 2     7 6 5 4  3 2 1 0
       number1  = 8  => 0 0 0(0  1 0)0 0  -> mask position 2 - 4
                     => 0 0 0 0  0 1 1 1  -> ((1<<n)-1) -> ((1<<3)-1) => 8-1 = 7
                     => 0 0 0 1  1 1 0 0  -> <<possition => 2 ->mask

       number12 = 4  => 0 0 0(0  0 1)0 0  -> mask position 2 to 4
                     => 0 0 0 0  0 0 1 1  -> ((1<<n)-1) -> ((1<<3)-1) => 4-1 = 3
                     => 0 0 0 0  1 1 0 0  -> <<possition => 2 ->mask
    */
    unsigned int mask = ((1 << n) - 1) << possition;

    // isolate bits from numbers
    /*
    number = 8 => 0 0 0 0  1 0 0 0
               => 0 0 0 1  1 1 0 0  -> <<possition => 2 ->mask
               => 0 0 0 0  1 0 0 0  -> 8

    number = 4 => 0 0 0 0  0 1 0 0
               => 0 0 0 0  1 1 0 0  -> <<possition => 2 ->mask
               => 0 0 0 0  0 1 0 0  -> 4
    */
    unsigned int number1_bit = number1 & mask;
    unsigned int number2_bit = number2 & mask;

    // clear bit from number1 and number2
    /*
    number = 8 => 0 0 0 0  1 0 0 0
               => 1 1 1 1  0 1 1 1  ->~
               => 0 0 0 0  0 0 0 0  -> &
    */
    number1 = number1 & ~mask;
    number2 = number2 & ~mask;

    // swap bits: add bits to number 1 and number2
    /*
    number1 => 0      => 0 0 0 0  0 0 0 0 -> cleared bit
    number2_btit      => 0 0 0 0  0 1 0 0  -> 4
    ----------------------------  => | or
    number2 => swaped => 0 0 0 0  0 1 0 0 => 4
    */
    number1 = number1 | number2_bit;
    number2 = number2 | number1_bit;

    //display final swaped numbers
    printf("final value of number1 after swap : %u \n", number1);
    printf("final value of number2 after swap : %u \n",number2);

    return 0;
}