//Author: Md Marsad Zoardar
//August 13, 2026
/*In this challenge, we are going to write a program that demonstrates
 * our understanding of pointer arithmetic and the const modifier
 * 1. Write a function that calculate the length of a string
 * -> The function should take a "const char pointer" as a parameter
 * -> The function can only determine the length of the string using pointer
 * -> Use incrementation operator to get the end of the string using pointer arithmetic
 * -> You are required to use a while loop using the value of the pointer to exit
 * -> The function should subtract two pointers (one pointing to the end of the string and one pointing to the beginning of the string)
 * -> The function should return an int that is the length of the string passed into the function
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//My function
int strLength(const char *pointer);
//Jason's function
int stringLength(const char *string);

int main(){
    
    char myString[] = "My name is Marsad"; //My variable
    
    printf("The length of the string is: %i\n", strLength(myString));//My output
    printf("The length of the string is: %i\n", strLength("My name is Marsad and I live in Jhenaidah"));//My output
    ///////////////////////////////////////////////////////////
    
    printf("The length of the string is: %d\n", stringLength("stringLength test"));
    printf("The length of the string is: %d\n", stringLength(""));
    printf("The length of the string is: %d\n", stringLength("Jason"));
    
    return 0;
}

//My algorithm

int strLength(const char *pointer){
    
    int count = 0;
    
    while(*pointer){ //When the pointer = '\0', it exits the loop
        
        ++pointer;
        //*pointer++; This position and post increment yields the same output, except there is a warning
        count += 1;
        //*++pointer; This position and pre increment yields the same output, except there is a warning
        //*pointer++; This position and post increment yields the same output, except there is a warning
    }
    
    return count;
}

//Jason's solution
int stringLength(const char *string){
    const char *lastAddress = string;
    
    while(*lastAddress){ //or while(*lastAddress != '\0')
        ++lastAddress;
    }
    
    return lastAddress - string;
}


