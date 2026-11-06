/*
 * Function to convert a decimal number to any ase between 2 and 16
 * perform repeated division
 * tore each reminder
 * build the result in the correct order
 * for the base above 9 reminders 10-15 should be represented as letters A-F
 * converted value should be displayed from the main function
 */

#include <stdio.h>
#include <string.h>

void converted_base(int number, int base, char result[])
{

  // if number is  0 print the result '0'
  if (number == 0)
  {
    result[0] = '0';
    result[1] = '\0'; // null charecter
    return;
  }

  int i = 0;

  while (number > 0)
  {
    // find the reminder value
    int reminder = number % base;

    // arecter handling: converting numbers
    if (reminder < 10)
    {
      result[i] = reminder + '0';
    }
    else
    {
      result[i] = (reminder - 10) + 'A';
    }

    i++;
    number = number / base; // updating the number
  }

  result[i] = '\0'; // terminaing the string

  // to correct the order : reversing the array
  int start_value = 0;
  int end_value = i - 1;

  while (start_value < end_value)
  {
    int temp = result[start_value]; // store start value in temp
    // swapping start and end values
    result[start_value] = result[end_value];
    result[end_value] = temp;
    start_value++;
    end_value--;
  }
}



int main()
{

  int decimal_number, base_value;
  char converted_value[100];

  // ask the user to enter a number
  printf("enter a decimal number : ");
  scanf("%d", &decimal_number);

  // ask the base number
  printf("enter he base value : ");
  scanf("%d", &base_value);

  // call the function for convert the value
  converted_base(decimal_number, base_value, converted_value);

  printf("converted value : %s \n", converted_value);

  return 0;
}