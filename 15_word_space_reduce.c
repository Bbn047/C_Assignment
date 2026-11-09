/*
 *Write a C program that takes a string from the user and replaces every sequence of

multiple consecutive spaces with a single space.

Description: The program should prompt the user to enter a sentence that may

contain several spaces between words. It must then process the string to ensure that

any instance where two or more blank spaces appear together is reduced to just one

blank space. The final cleaned string should be displayed on the screen.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str_data[100];
    // enter the string
    printf("enter a sentence with multiple spaces : ");
    fgets(str_data, sizeof(str_data), stdin);

    // remove newline charecter
    str_data[strcspn(str_data, "\n")] = '\0';

    int j = 0;
    // using for loop for iteration
    for (int i = 0; str_data[i] != '\0'; i++)
    {
        // checking current charecter is '0'. if not keep it
        if (str_data[i] != ' ')
        {
            str_data[j] = str_data[i];
            j++;
        }
        // copy the space if the previous charecter is not space
        else if (j == 0 || str_data[i - 1] != ' ')
        {
            str_data[j] = str_data[i];
            j++;
        }
    }
    // null terminater
    str_data[j] = '\0';

    // display the output
    printf("sentence after remove multiple spaces is : \"%s\" ", str_data);
}