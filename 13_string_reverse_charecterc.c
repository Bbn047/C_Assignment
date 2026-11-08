/*
  * Write a C program that takes a string from the user and reverses its characters using an iterative approach.
  * The program should prompt the user to enter a sequence of characters. 
  * It must then swap or move the characters within the string using a loop until the entire string is reversed. 
  * The final resulting string should be displayed on the screen.
*/

#include <stdio.h>
#include <string.h>

int main(){
  
    char str_value[100];

    //take user input
    printf("enter a string : ");
    scanf("%s", &str_value);

    int length = strlen(str_value);

    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        //swaping the charecters 
        int temp = str_value[start];
        str_value[start] = str_value[end];
        str_value[end] = temp;

        //change the start and nd points
        start++;
        end--;
    }
   
    //display the swapped string
    printf("\"%s\" is the swapped string \n", str_value);

    

    return 0;
}