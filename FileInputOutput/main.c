//Author: Md Marsad Zoardar
//August 14 & 15, 2026
//File input and output


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*int main(int argc, char **argv)
{
	FILE *fp;
    int c;
    
    fp = fopen("myText.txt", "r");//opening myText
    
    if(fp == NULL){
        perror("Error opening file");
        return -1;
    }
    //read a single character, not the most effcient way as we are supposed to read it as a string
    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    printf("\n\n");
    
    fclose(fp);
    fp = NULL;
    
*/   
    /*****************Using fgets to read strings***************************/
        
/*    FILE *fg;
    char str[60];
    
    //opening file for reading
    fg = fopen("myText.txt", "r");
    
    if(fg == NULL){
        perror("Error opening file");
        return -1;
    }
    if(fgets(str, 60, fg) != NULL){ //it reads upto the specified numbers of characters or when it hits a line feed
        printf("%s", str);
    }
    printf("\n\n");
    
    fclose(fg);
    fg = NULL;
*/    
    /***********************Using fscanf to read formatted input from a file***********************/
    
/*    char str1[10], str2[10], str3[10];
    int year;
    FILE *fs;
    
    fs = fopen("myText", "w+");
    if(fs == NULL){
        perror("Error opening file");
    }
    else{
        fputs("Hello, how are you?", fs);
    }
    
    rewind(fs);
    
    fscanf(fs, "%s %s %s %d", str1, str2, str3, &year);
    
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read Strings |%s|\n", str3);
    printf("Read Integer |%d|\n", year);
    
    fclose(fs);
    
    
        
	return 0;
}
*/