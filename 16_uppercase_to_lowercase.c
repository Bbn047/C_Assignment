/*
Write a C program that takes a string from the user and converts all uppercase letters
into their corresponding lowercase letters.

Description: The program should prompt the user to enter a sequence of characters. It

must then check each character individually. If a character is an uppercase letter, the

program should convert it to its lowercase equivalent. If the character is already

lowercase or is not a letter at all, the program should leave it exactly as it is. The final

modified string should be displayed on the screen.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str_data[100];

    // user input
    printf("enter a sentence with uppercase charecters : ");
    fgets(str_data, sizeof(str_data), stdin);

    // remove new line chareter
    str_data[strcspn(str_data, "\n")] = '\0';

    // for loop itretion
    for (int i = 0; str_data[i] != '\0'; i++)
    {
        if (str_data[i] >= 'A' && str_data[i] <= 'Z')
        {
            /*ASII value
            A =>65  a =>97 difference 97-65 = 32
            B =>66  b =>98 difference 98-66 = 32
            */
            str_data[i] = str_data[i] + 32; // adding 32 to get lowercase
        }
    }

    printf("sentence after lower case conversion is \" %s \" \n", str_data);

    return 0;
}