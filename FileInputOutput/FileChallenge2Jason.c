//Author: Md Marsad Zoardar
//August 15, 2026
//File input and output challenge
/*Write a program that converts all characters
 * of a file to uppercase and write the results
 * out to a temporary file. Then rename the file
 * to the original filename and remove the temporary
 * file.
 * -> use fopen(), tempfile(), rename(), islower(), remove()
 * -> use fgetc() and fputc()
 * -> use rename() and remove()
 * -> use islower() to check and convert to uppercase
 * -> use fputc() for the conversion of the character
 * -> display the output (read the file)
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define FILENAME "challenge.txt"


int main(){
    
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    
    char ch;
    
    fp = fopen(FILENAME, "r");
    
    if(fp == NULL){
        perror("Cannot open file");
        return -1;
    }
    //create a temp file
    fp1 = fopen("temp.txt", "w");
    
    if(fp1 == NULL){
        perror("Cannot create file");
        return -1;
    }
    
    while((ch = fgetc(fp)) != EOF){
        if(islower(ch)){
            ch = ch - 32;
        }
        
        fputc(ch, fp1);
    }
    
    fclose(fp);
    fclose(fp1);
    
    //rename temp file
    rename("temp.txt", FILENAME);
    
    //remove the temp file
    remove("temp.txt");
    
    
    fp = fopen(FILENAME, "r");
    
    if(fp1 == NULL){
        perror("Cannot open file");
        return -1;
    }
    
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    
    fclose(fp);
    
    fp = NULL;
    fp1 = NULL;
    
    return 0;
}