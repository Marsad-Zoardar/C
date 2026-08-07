//Author: Md Marsad Zoardar
//Date: August 7, 2026
//String Challenge
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);


int main(){
    
    const char word1[] = "Jason Fedin";
    const char word2[] = "Marsad Zoardar";
    const char word3[] = "Marsad Zoardar";
    char result[50]; //variable to use for the second function
    
    
    //printing function 1 output
    printf("The length of the strings are: %d, %d, and %d.\n", stringLength(word1), stringLength(word2), stringLength(word3));
    
    //calling the concatinate function
    concat(result, word1, word2);
    
    printf("\n%s\n\n", result);
    
    printf("%d\n", equalStrings("Jason", "Jason"));
    printf("%d\n", equalStrings("Jason", "Marsad"));
    
    return 0;
}

/***********************************
 * This Function takes a constant string
 * and returns the length of the string
 * ********************************/

int stringLength(const char string[]){
    
    unsigned int count = 0;
    
    while(string[count] != '\0'){
        ++count;
    }
    
    return count;
}

/******************************************
 * This functions takes 3 arguments and concatinates
 * the given constant strings
 * ****************************************/
void concat(char result[], const char str1[], const char str2[]){
    
    int i, j;
    
    for(i = 0; str1[i] != '\0'; ++i){
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; ++j){
        result[i + j] = str2[j];
    }
    
    result[i + j] = '\0';
}


/****************************************
This function compares two strings to see
if they are equal
****************************************/

bool equalStrings(const char s1[], const char s2[]){
    
    //int i = 0; //This variable was created to be used in the while loop, i didn't use it
    bool isEqual = false;
    int count1 = 0;
    int count2 = 0;
    
    while(s1[count1] != '\0'){
        ++count1;
    }
    while(s2[count2] != '\0'){
        ++count2;
    }
    
    if(count1 == count2){
        
        isEqual = true;
    }else{
        isEqual = false;
    }
    
    return isEqual;
}