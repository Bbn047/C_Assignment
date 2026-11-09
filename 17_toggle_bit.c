/*Write a C program that takes a number and toggles a specific number of bits (n)

starting from a given position.

Description: The program should prompt the user to enter an integer, a starting bit

position, and the number of bits to be modified. It must then change the state of those

(n) consecutive bits—switching 0s to 1s and 1s to 0s—while keeping all other bits in

the number exactly as they were. The final value of the number after the toggle

operation should be displayed on the screen.
*/

#include <stdio.h>

int main()
{
    unsigned int number, n, position;
    // user enter a number
    printf("enter a number : ");
    scanf("%u", &number);

    // enter how many bits modify
    printf("number of bits modify : ");
    scanf("%u", &n);

    // enter starting postion
    printf("enter staring position : ");
    scanf("%u", &position);

    // loop through the bits
    for (int i = 0; i < n; i++)
    {
        number ^= (1 << position + i);
    }

    printf("the number \"%u\" after toggle \"%u\" of bits from postion \"%u\" \n", number, n, position);

    return 0;
}