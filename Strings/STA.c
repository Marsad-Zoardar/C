//Author: Md Marsad Zoardar
//Date: August 9, 2026
//Search, Tokenize, and Analyze string
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>



int main(){
//    char str[] = "The quick brown fox";
//    char ch = 'q';
//    char *pGot_char = NULL;
//    pGot_char = strchr(str, ch); //This function searches for an individual character and points to its address
//    
//    char text[] = "Every dog has his day";
//    char word[] = "dog";
//    char *pFound = NULL;
//    pFound = strstr(text, word); //This function searches for a string within a string and points towards its address
//    
//    printf("The address of the character is: %d\n", *pGot_char);
//    printf("The address of the word is: %d\n", *pFound);

    //String token example
    //What is a token? ==> A token is a sequence of characters within a string that is boung by a delimeter
 
 /* This program tokenizes a string from a delimeter

   
    char str[80] = "Hello how are you - my name is - Jason";
    const char s[2] = "-";
    char *token;
    
    //get the first token
    token = strtok(str, s);
    
    //walk through other tokens
    
    while(token != NULL){
        printf("%s\n", token);
        
        token = strtok(NULL, s);
    }
    */
    
    /*This program counts the number of letters and digits from a string*/
    
//    char buff[100];     //input buffer
//    int nLetters = 0;   //Number of letters in input
//    int nDigits = 0;    //Number of digits in input
//    int nPunct = 0;     //Number of punctuation characters in input
//    
//    printf("Enter an interesting string of less than %d characters: \n", 100);
//    scanf("%[^\n]s", buff);   //Read a string into buffer
//    
//    int i = 0;          //buffer index
//    while(buff[i]){
//        if(isalpha(buff[i])){
//            ++nLetters; //increment letter count
//        }
//        else if(isdigit(buff[i])){
//            ++nDigits;
//        }
//        else if(ispunct(buff[i])){
//            ++nPunct;
//        }
//        ++i;
//    }
//    
//    printf("Your string contained %d letter, %d digits, and %d punctuation characters.\n", nLetters, nDigits, nPunct);

/*
 * This function converts the string from upper case to lower case or vice versa
 * 
 * Didn't work as expected, need to dig in later
 * */
        
//    char text[100];         //input buffer to string to be reached
//    char substring[40];     //input buffer for string sought
//    int i;
//    
//    printf("Enter the string to be searched (less than %d characters): \n", 100);
//    scanf("%[^\n]s", text);
//    
//    printf("Enter the string sought (less than %d characters): \n", 40);
//    scanf("%[^\n]s", substring);
//    
//    printf("The first string entered is:\n%s\n", text);
//    printf("The second string entered is:\n%s\n", substring);
//    
//    //convert both strings to uppercase
//    for(i = 0; (text[i] = (char)toupper(text[i]) !='\0'); ++i);
//    for(i = 0; (substring[i] = (char) toupper(substring[i]) != '\0'); ++i);
//    
//    
//    printf("The second %s found in the first.\n", (strstr(text, substring) == NULL) ? "was not": "was");
//        


    //This function converts ascii to other values using functions like atof(), atoi(), atol(),
    //atoll(), strtod(), strtof(), strtolf(), etc.
    
    double value = 0;
    char str[] = "3.5 2.5 1.26";    //The string to be converted
    char *pstr = str;               //pointer to the string to be converted
    char *ptr = NULL;               //pointer to character position after conversion
    
    while(true){
        value = strtod(pstr, &ptr); //convert starting at pstr
        if(pstr == ptr){
            break;
        }
        else{
            printf(" %0.2f\n", value);   //output the resultant value
            pstr = ptr;             //store start for next conversion
        }
    }
    
    return 0;
}