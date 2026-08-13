//Author: Md Marsad Zoardar
//August 13, 2026
//Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char **argv){
    
    //malloc
//    int *pNumber = (int*) malloc(100);//not a good idea as it will not work in different computers
//   int *pNumber2 = (int*) malloc(25*sizeof(int));//sizeof is very important when allocating memory using malloc
    
    
    /***********************************************
    
       ALWAYS RELEASE MEMORY AFTER YOU ALLOCATE IT
    
    ***********************************************/
//    free(pNumber);
//    pNumber = NULL;
    
    
    //calloc -> has advantages over malloc
    //takes 2 arguments
//    int *pNumber3 = (int*) calloc(75, sizeof(int));
    
    //realloc -> this is to use memory that were previously allocated
    //takes two arguments
    
    /*********************Example Program********************/
    char *str = NULL;
    
    //initial memory allocation
    str = (char*) malloc(15*sizeof(char));
    strcpy(str, "Marsad");
    printf("String = %s, address = %p\n", str, str);
    
    
    //Reallocating memory
    str = (char*) realloc(str, 25*sizeof(char));
    strcat(str, " Zoardar");
    printf("String = %s, address = %p\n\n", str, str);
    
    free(str);
    
    
    
    
    return 0;
}