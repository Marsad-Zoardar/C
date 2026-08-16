//Author: Md Marsad Zoardar
//August 16, 2026
//Write a program that will print the contents of a file in reverse order
/* ->use fseek() function to seek the end of the file
 * -> use the ftell() function to get the position of the file pointer
 * ->display as output the file in reverse order
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define FILENAME "challenge3.txt"

int main(){
    
    FILE *fp = NULL;
    int count = 0;
    int i = 0;
    
    fp = fopen(FILENAME, "r");
    if(fp == NULL){
        perror("Error opening file");
        return -1;
    }
    //This moves the position to the end of the file
    fseek(fp, 0, SEEK_END);
    
    //get the position of the file pointer
    count = ftell(fp);
    
    while(i < count){
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }
    printf("\n");
    fclose(fp);
    fp = NULL;
    
    
    return 0;
}