//Author: Md Marsad Zoardar
//August 13, 2026
/*In this challenge, we are going to write a program that demonstrates
 * dynamic memory allocation.
 * -> write a program that will allow the user to input a string
 * -> The user can enter the limit of the string they are entering, use this limit when invoking malloc
 * -> the program should create a char pointer only, no character arrays
 * -> be sure to release the memory
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    
    char *text = NULL;
    int memorySize = 0;
    
    printf("Please enter the byte size should be allocated for your string: ");
    scanf("%d", &memorySize);
    
    text = (char*) malloc(memorySize * sizeof(char));
    
    if(text != NULL){
        printf("Enter some text: ");
        scanf("%[^\n]s", text);
        
        printf("Inputted text is: %s\n", text);
    }
    
    
    free(text);
    
    return 0;
}