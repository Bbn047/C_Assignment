/*
  * use a function to count the fequency of each digit (0-9) in a given number
  -> neter a number
  -> take the number into a separate function
  -> extract each digitusing lop and update frequency
  -> no return vlaue
  -> main function print the ouput
  note: use pass by reference (pointers)
*/
#include <stdio.h>

void digit_count(int num, int *frequency)
{
    // convert negative number to possitive number
    if (num < 0)
    {
        num = -num;
    }
    // checking the input number is 0
    if (num == 0)
    {
        // if input 0 add the count
        frequency[0]++;
        return;
    }
    // if non zero number
    while (num > 0)
    {
        // if the input is not 0 count each digit in the given number
        int digit = num % 10;     // finding the last digit, eg: 345 % 10 => 5
        (*(frequency + digit))++; // add the count into array without return value, 5 = count (0)   => 5 = count(1 ++)
        num = num / 10;           // remove the last digit and update the number 345 / 10 => 34 (5)
    }
}

int main()
{
    int number;
    int frequency[10] = {0};
    printf("enter a number : ");
    scanf("%d", &number);

    // calling the function
    digit_count(number, frequency);

    printf("digit count of number %d is : \n", number);
    for (int i = 0; i < 10; i++)
    {
        // print the digit if count is greater than 0
        if (frequency[i] > 0)
        {
            printf("%d is in the number: %d \n", i, frequency[i]);
        }
    }

    return 0;
}