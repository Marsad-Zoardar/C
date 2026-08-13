//Author: Md Marsad Zoardar
//August 13, 2026
//Pointer Arithmetic

#include <stdio.h>
#include <string.h>

int arraySum(int *ptr, const int n);

int main(){
    
    //Example program
    int arraySum(int *ptr, const int n);
    int values[15] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5, 6, 8, -9, 10, 4};
    
    printf("The sum is %i\n", arraySum(values, 15));
    
    //This part of the program demonstrates the effect of adding an integer value to a pointer
    char multiple[] = "a string";
    char *p = multiple;
    
    for(int i = 0; i < strlen(multiple); ++i){
        printf("Multiple[%d] = %c\t*(p+%d) = %c\t&multiple[%d] = %p\tp+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i );
    }
    //////////////////////////
    //This part of the program demonstrates the effect of adding a long value to a pointer
    printf("\n\n\n");
    long multiple2[] = {15L, 25L, 35L, 45L};
    long *q = multiple2;
    
    for(int j = 0; j < sizeof(multiple2)/sizeof(multiple2[0]); ++j){
        printf("address q+%d (&multiple2[%d]): %llu  *(q+%d) value: %ld\n", j, j, (unsigned long long)(q+j), j, *(q+j));
    }
    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));
    
    return 0;
    
}


//Example program
int arraySum(int *ptr, const int n){
    int sum = 0;
    int *const arrayEnd = ptr + n;
    
    while(ptr < arrayEnd){
        sum += *ptr;
        ++ptr;
    }
    
    return sum;
}