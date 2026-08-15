//Author: Md Marsad Zoardar
//August 15, 2026
//Writing into files



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//
//int main(int argc, char **argv){
//    
//    
//    /********************fputc() to insert a character in a file *****************/
//    FILE *fp;
//    int ch;
//    
//    fp = fopen("challenge.txt", "w+");
//    
//    if(fp == NULL){
//        perror("Cannot open file");
//    }
//    
//    for(ch = 33; ch <= 100; ch++){
//        fputc(ch, fp);
//    }
//    
//    fclose(fp);
//    
//    /********************fputs() to insert a string in a file *****************/
//    
//    FILE *fs;
//    
//    fs = fopen("challenge.txt", "w+");
//    
//    fputs("\nThis is Md Marsad Zoardar", fs);
//    fputs("\nWho is trying to become an embedded wizard.", fs);
//    
//    fclose(fs);
//    
//     /********************fprintf() to format an output file *****************/
//     
//     FILE *fpf = NULL;
//     fpf = fopen("challenge.txt", "w+");
//     
//     if(!fpf){
//         fprintf(fpf, "%s%s%s%s%d", "Hello ", "my ", "number ", "is ", 35962);
//     }
//     
//     
//     
//     fclose(fpf);
//    
//    
//    return 0;
//}