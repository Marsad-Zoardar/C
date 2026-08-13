//Author: Md Marsad Zoardar
//August 13, 2026
//Char pointer

#include <stdio.h>
#include <string.h>

void copyString(char *to, char *from);


int main(){
    
    char string1[] = "A string to be copied";
    char string2[50];
    
    copyString(string2, string1);
    printf("%s\n", string2);
    
    return 0;
}

//This function copies one string to another
void copyString(char *to, char *from){
    while(*from){ //The null character '\0' is equal to the value 0, so will jump out then
        *to++ = *from++;
        *to = '\0';
    }
}