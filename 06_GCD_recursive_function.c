/*
 * use recursive function to find the GCD(greatest common devidor) of two numbers
 -> ask user to print two number
 -> call a function for GCD
 -> check the the larger number and the remainder
 -> divide the larger number with remainder until get 0
 -> return the number
*/

#include <stdio.h>

//function for find GCD
int gcd(int num1, int num2)
{
    // find the largest number of the given numbers
    if (num1 < num2)
    {
        // swapping the numbers f number 2 is larger
        return gcd(num2, num1);
    }
    // checking the reminder is 0
    if (num2 == 0)
    {
        return num1;
    }

    return gcd(num2, num1 % num2);
}


int main()
{
    int number1, number2;
    printf("enter first number : ");
    scanf("%d", &number1);
    printf("enter second number : ");
    scanf("%d", &number2);

    // call a function to find the GCD
    int result = gcd(number1, number2);
    printf("GCD of the given numbers %d, %d  is : %d ", number1, number2, result);
    return 0;
}