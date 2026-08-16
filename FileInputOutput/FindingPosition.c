//Author: Md Marsad Zoardar
//August 16, 2026
//Finding current position in any file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//int main(){
    
    //using ftell()
    
//    FILE *fp = NULL;
//    int len;
//    
//    fp = fopen("challenge.txt", "r");
//    if(fp == NULL){
//        perror("Error opening file");
//        return -1;
//    }
//    
//    fseek(fp, 0, SEEK_END);
//    
//    len = ftell(fp);
//    fclose(fp);
//    
//    printf("Total size of the file is: %d bytes\n", len);
    
    
    //using fgetpos()
//    FILE *fp1 = NULL;
//    fpos_t position;
//    
//    fp1 = fopen("challenge.txt", "w+");
//    
//    fgetpos(fp1, &position);
//    fputs("Hello, World!", fp1);
//    
//    fclose(fp1);
    
    //Setting a position in file using fseek(FILE *pfile, long offset, int origin)
//    FILE *fp3 = NULL;
//    
//    fp3 = fopen("challenge.txt", "w+");
//    if(fp3 == NULL){
//        perror("Error opening file");
//        return -1;
//    }
//    
//    fputs("This is Marsad", fp3);
//    
//    fseek(fp3, 7, SEEK_SET);
//    fputs("Hello, how are you?", fp3);
//    
//    fclose(fp3);
    
    //fsetpos(FILE *pfile, const fpost_t *position) goes with fgetpos()
//    FILE *fp4 = NULL;
//    fpos_t position;
//    
//    fp4 = fopen("challenge.txt", "w+");
//    if(fp4 == NULL){
//        perror("Error opening file");
//        return -1;
//    }
//    fgetpos(fp4, &position);
//    fputs("Hello, world!", fp4);
//    
//    fsetpos(fp4, &position);
//    fputs("This is going to override previous content", fp4);
//    
//    fclose(fp4);
//   
//    
//    return 0;
//}