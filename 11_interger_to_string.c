/*
 * digits to string
 * take input from user
 * process the integer by charecter
 * display the final string result
 */

#include <stdio.h>
#include <string.h>

void string_convert(int number, char str[])
{
    int is_negaive = 0;
    int i = 0;
    // if number is 0 print zero
    if (number == 0)
    {
        str[0] = '0';
        str[1] = '\0'; // null terminator
        return;
    }
    // checking for negative number
    if (number < 0)
    {
        is_negaive = 1;
        number = -number; // temporarly convert -ve number as +ve
    }

    // extract numbers from right to left
    while (number > 0)
    {
        int reminder = number % 10;
        str[i] = reminder + '0';
        i++;
        number = number / 10;
    }

    // adding negative sign at the end
    if (is_negaive)
    {
        str[i] = '-';
        i++;
    }

    str[i] = '\0';

    // reversing the string for get  the corect order
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int main()
{
    int number;
    char str_value[100];
    // take input from the user
    printf("enter a number : ");
    scanf("%d", &number);

    // call function for convert integer to string
    string_convert(number, str_value);

    //display the ouput
    printf("the number after converting to sring is : %s \n",str_value);

    return 0;
}