/*
   * write a c program that takes input from user and determines whether the numeber is odd or even
   -> user enter the whole number
   -> number divided by 2
   -> if its perfect print even  otherwise odd
   -> program should handle +ve and -ve numbers
*/

#include <stdio.h>


int main(){

    int number;

    printf("enter a number :\n");
    scanf("%d", &number);

    //entered number divided by 2 
    if((number % 2)==0){
        printf("the entered number %d is EVEN number \n", number);
    }
    else{
        printf("the entered number %d is ODD number \n", number );
    }

    return 0;
}
