/*
 * Write a C program that takes a string input from the user and determines whether it is a pangram or not.
 * The program should prompt the user to enter a sentence or a string of characters.
 * It must then verify if every letter of the alphabet from A to Z appears at least once within the provided text
 * regardless of whether the letters are uppercase or lowercase.
 * The final output should state if the string is a pangram.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str_vlaue[100];
    int alphabets[26] = {0}; // initillay assume 0 charecter , check the charecters
    int is_pangram = 1;      // initially set pangram

    // take user input
    printf("enter a sting : ");
    fgets(str_vlaue, sizeof(str_vlaue), stdin);

    // remove the new line from fgets
    str_vlaue[strcspn(str_vlaue, "\n")] = '\0';

    // loop through string charecters

    for (int i = 0; str_vlaue[i] != '\0'; i++)
    {
        char charecter = str_vlaue[i];

        // chaecking the lowercase charecters
        if (charecter >='a' && charecter <= 'z')
        {
            alphabets[charecter - 'a'] = 1;
        }
        // for uppercase charecter
        else if (charecter >= 'A' && charecter <= 'Z')
        {
            alphabets[charecter - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        // if any of the charecter is not found
        if (alphabets[i] == 0)
        {
            is_pangram = 0; // break the loop
            break;
        }
    }

    // display the output
    if (is_pangram)
    {
        printf("the given string is pangram \n");
    }
    else
    {
        printf("the given string is not pangram");
    }

    return 0;
}