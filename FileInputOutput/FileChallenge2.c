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


/*
int createFile(char *fileName); //Function to create a file with the chosen file name
int writeFile(void); //Function to write into the newly created .txt file
//void convertFile(void);





int main(int argc, char **argv){
    
    char fileName[100];
    
    printf("Enter the name of your text file (without.txt): ");
    scanf("%99s", fileName);
    
    if (createFile(fileName) == 0 ){
        printf("Procedding to create a file.....\n\n\n");
    }
    else{
        printf("Couldn't create file. Aborting....\n\n");
    }
     printf("You have successfully created a file with the name %s \n\n", fileName);
     
    return 0;
} 

//Function to create a file with the chosen file name

int createFile(char *fileName){
    
    FILE *fp = NULL;
    char fullName[105];
    //char fileName[100];//this variable can be used if the function doesn't take an argument
    
    
    strcpy(fullName, fileName);
    strcat(fullName, ".txt");//append the .txt extension
    
    fp = fopen(fullName, "w");
    
    if(fp == NULL){
        perror("Couldn't create file");
        return -1;
    }
    
    fclose(fp);
    
    return 0;
}

//This function writes into the newly created file by the user

int writeFile(char *fileName){
    
    FILE *fw = NULL;
    char fullName[105];
    char strings[200];
    
    strcpy(fullName, fileName);
    strcat(fileName, ".txt");
    
    fw = fopen(fullName, "a"); // "a" = append mode, adds to existing content
  
}
*/

int createFile(char *fullname) {
    FILE *fp = fopen(fullname, "w");
    if (fp == NULL) {
        printf("Error: could not create file.\n");
        return -1;
    }
    fclose(fp);
    return 0;
}

int writeToFile(char *fullname) {
    FILE *fp = fopen(fullname, "a");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return -1;
    }
    // ... write loop as before ...
    fclose(fp);
    return 0;
}

//int main(void) {
//    char filename[100];
//    char fullname[105];
//
//    printf("Enter a filename (without .txt): ");
//    scanf("%99s", filename);
//    while (getchar() != '\n');
//
//    strcpy(fullname, filename);
//    strcat(fullname, ".txt");   // built ONCE, here
//
//    if (createFile(fullname) == 0) {
//        writeToFile(fullname);
//    }
//
//    return 0;
//}
