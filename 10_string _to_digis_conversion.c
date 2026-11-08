/*
 * string of digits to quivalent integer value
 * take input from user
 * process the string charecter by charecter
 * display the final interger result
 */
#include <stdio.h>
#include <string.h>

int main()
{
  // user input
    char str_numbers[100];
    int result = 0;   // use for store the output

    printf("enter a string numbers : ");
    scanf("%s", &str_numbers);

    //loop through the string
    for (int i = 0; str_numbers[i] != '\0'; i++)
    {
        //checking the string charecters are numbers
        if (str_numbers[i] >= '0' && str_numbers[i] <= '9')
        {
            // convert charecter to integer. 
            result = result * 10 + (str_numbers[i] - '0');  
        }
        else
        {
            printf("error invalid charector found n");
            return 1;
        }
    }
//print the output
    printf("the converted string integers is : %d \n", result);

    //checking the converted integers are ture
    printf("checking the string is converted. converted value %d + 10 = %d \n", result, result + 10);
    return 0;
}