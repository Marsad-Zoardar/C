//Author: Md Marsad Zoardar
//Date: August 9, 2026
//String length, copy Challenge

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void reverseString();
void sortStrings();

//int main(){
//    
//    reverseString();
//    sortStrings();
//    return 0;
//}
//
////This function takes a string as input and prints out in reverse order
//
//void reverseString(){
//    
//    int i;
//    char input[100];
//    int count = 0;
//    
//    printf("Enter a string you want to reverse: ");
//    
//    //Takes the input and making sure it is not stopping when hitting a space
//    scanf("%[^\n]s", input);
//    count = strlen(input);
//    
//    //loop to print in reverse order based on index number
//    for(i = (count - 1); i >= 0; --i){
//        printf("%c ", input[i]);
//    }
//    printf("\n\n");
//    
//}
//
//void sortStrings(){
//    
//    int i;
//    int j;
//    int n;
//    char name[25][50];
//    char temp[25];
//    
//    printf("Input number of strings: ");
//    scanf("%d", &n);
//    
//    printf("Input string %d: \n", n);
//    
//    for(i = 1; i <= n; i++){
//        scanf("%s", name[i]);
//    }
//    
//    for(i = 1; i <= n; i++){
//        for(j = 0; j <= n-1; j++){
//            if(strcmp(name[j], name[j+1]) > 0){
//                strncpy(temp, name[j], sizeof(temp) -1);
//                strncpy(name[j], name[j+1], sizeof(name[j]) -1);
//                strncpy(name[j+1], temp, sizeof(name[j+1]) -1);
//            }
//        }
//    }
//    printf("The strings appear after sorting: \n");
//    
//    for(i = 0; i <= n; i++){
//        printf("%s\n", name[i]);
//    }
//    
//    
//}