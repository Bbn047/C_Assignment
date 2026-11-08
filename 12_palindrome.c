/*
 *check the string is plaindrome or not
 * take user input
 * diplay is it palindrome or not
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str_vlaue[100];
    int is_palindrome = 1; // assume initially string is pallindrome
    printf("enter a string: ");
    scanf("%s", &str_vlaue);

    // find the string length
    int length = strlen(str_vlaue);

    // set starting and end points
    int start = 0;
    int end = length - 1;

    // compare oth sides charecters
    while (start < end)
    {
        if (str_vlaue[start] != str_vlaue[end])
        {
            // if both sides mismatch find string is not pallindrome break the code
            is_palindrome = 0;
            break;
        }
        // if same continue with other charecters
        start++;
        end--;
    }

    if (is_palindrome)
    {
        printf(" \"%s\" the entered string is pallindrome \n", str_vlaue);
    }
    else
    {
        printf("\"%s\" the entered string is not pallidrome \n", str_vlaue);
    }

    return 0;
}