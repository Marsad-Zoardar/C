//Author: Md Marsad Zoardar
//August 7, 2026
//String Functions

#include <stdio.h>
#include <string.h>

//strlen() ==> This function returns the length of a string
//strcpy() ==> We cannot assign arrays or string in C. We use strcpy function to copy a string to an array (takes two arguments)
//strncpy() ==> Safer way to copy a string. You need to specify the number of characters you want to copy. (takes 3 arguments)
//strcat() ==> Concatinates two strings. (takes 2 arguments)

int main(){
    
    /*char myString[] = "My string is longer than temp";
    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("%d\n", strncmp(myString, temp, sizeof(myString)));

    printf("%s\n", temp);    
    printf("The length of this string is: %ld\n", strlen(myString)); 
    
    char src[50];
    char dest[50];
    
    //better use strncpy rather than strcpy
    strcpy(src, "This is the source.\n");
    strcpy(dest, "This is the destination.\n");
    
    printf("%s\n", src);
    printf("%s\n", dest);
    */
    
    //trying strcpy & strncpy myself
    /*
    char newString[] = "My String";
    char input[80];
    
    printf("Enter a string to be concatinated: ");
    scanf("%[^\n]s", input);
    
    printf("\nThe string %s concatinated with %s is:  \n", newString, input);
    printf("%s\n", strncat(input, newString, 15 ));
    */
    
    //concatinated string example
/*    char src[50], dest[50];
    
    strcpy(src, "This is source ");
    strcpy(dest, "This is destination ");
    
    strncat(dest, src, 15);
    
    printf("Final destination string : |%s| \n", dest);
    
*/
    printf("strcmp(\"A\", \"A\") is\t" );
    printf("%d\n", strcmp("A", "A"));
    
    printf("strcmp(\"A\", \"B\") is\t" );
    printf("%d\n", strcmp("A", "B"));
    
    printf("strcmp(\"B\", \"A\") is\t" );
    printf("%d\n", strcmp("B", "A"));
    
    printf("strcmp(\"C\", \"A\") is\t" );
    printf("%d\n", strcmp("C", "A"));
    
    printf("strcmp(\"apples\", \"apple\") is\t" );
    printf("%d\n", strcmp("apples", "apple"));
    
    //printf("strcmp(\"C\", \"A\" is" ));
    //printf("%d\n", strcmp("C", "A"));
    
    return 0;
    
}

