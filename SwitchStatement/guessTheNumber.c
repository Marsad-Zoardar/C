//Author: Md Marsad Zoardar
//July 28, 2026
//Guess the number
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//#define RAND_MAX 20


int main(int argc, char **argv){
    
    int min = 0;
    int max = 20;
    int random = (rand() % (max - min + 1) + min);
    int userInput;
    int i = 1;
    
    printf("%d\n", random);
    
    printf("Enter a number between 0 - 20: " );
    scanf("%d", &userInput);
    
    if(userInput < 0 || userInput > 20){
        printf("Your number is not in range: Please enter a number between 0 - 20: ");
    }
    
    if(userInput == random){
            printf("You guessed it right. You Win! \n");
        }
    else if(userInput != random){
        while(i <=5){
            printf("You didn't guess it right. Please try again. You have %d chances remaining.\n", 5-i);
            printf("Enter a number between 0 - 20: ");
            scanf("%d", &userInput);
                if(userInput < 0 || userInput > 20){
                    printf("Your number is not in range: Please enter a number between 0 - 20: ");
                }
            i++;
                if(userInput == random){
                    printf("You guessed it right. You Win! \n");
                    break;
                }
                else if(i > 5){
                    printf("Sorry! You didn't guess it right in 5 chances. You lose!\n");
                }
        }
        
    }
    
    
    return 0;
}

*/