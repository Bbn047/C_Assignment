/*
 * use a function to evaluate a simple arthematic expression given two numbers and operator
 * take two floating point numbers and and arthematic operator( *, +, -, /) from user
 * a separate function for each operator
 * the function should take operator as parameter
 * retrun the result in the main
 * division by zero must be handled gracefully insid the divide function
 */

#include <stdio.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    // chaek any of the number is 0 when do division
    if ((num2 == 0) | (num1 == 0))
    {
        printf("error division by zero not valid \n");
        return 0.0f;
    }
    return num1 / num2;
}

float calculation(float num1, float num2, char operator)
{
    float sum = 0.0f;

    // using switch case to do the corect operation
    switch (operator)
    {
    case '+':
        sum = add(num1, num2); // calling the function for do the specific operation
        break;

    case '-':
        sum = sub(num1, num2);
        break;

    case '*':
        sum = mult(num1, num2);
        break;

    case '/':
        sum = div(num1, num2);
        break;

    default:
        printf("error entered invalid operator \n");
    }

    return sum;
}

int main()
{
    float number1, number2;
    char operator;

    // get the numbers from user
    printf("enter first number : ");
    scanf("%f", &number1);

    printf("enter second number : ");
    scanf("%f", &number2);

    printf("enter the operator (+, -, /, *) : ");
    scanf(" %c", &operator);

    // print the final result after done the operation
    float result = calculation(number1, number2, operator);
    printf("the result is : %.2f %c %.2f = %.2f \n", number1, operator, number2, result);

    return 0;
}