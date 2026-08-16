//Author: Md Marsad Zoardar
//August 15, 2026
//File input and output challenge
/*Write a program to find the total number of lines in a text file
 * ->create a file that contains some text
 * ->open your test file
 * ->use the fgetc function to parse characters in a file until you get to the EOF
 *      >>if EOF, increment the counter. That's how you count the lines
 * ->display as output the number of lines in the file
 */

#define FILENAME "challenge.txt"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int main(){
    
    FILE *fp = NULL;
    char ch;
    int linesCount = 0;
    
    
    fp = fopen(FILENAME, "r");
    
    if(fp == NULL){
        perror("Cannot open file");
        return -1;
    }
    
    while((ch = fgetc(fp)) != EOF){
        if(ch == '\n'){
            linesCount++;
        }
    }
    
    fclose(fp);
    fp = NULL;
    
    printf("Total number of lines are: %d\n", ++linesCount);
    
    return 0;
    
    
}
*/