//Author: Md Marsad Zoardar
//July 28, 2026
//Guess the solution from Jason

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for random number generator seed

int main(int argc, char **argv){
    
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;
    
    //Initialize random number generator
    srand((unsigned) time(&t));
    
    //get the random number
    randomNumber = rand() % 21;
    
    printf("\nThis is a guessing game.\n");
    printf("I have chosen a number between 0 and 20. \n");
    
    
    for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses){
        printf("You have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        
        if(guess == randomNumber){
            printf("Congratulations! You guessed it.\n");
            break;
        }else if(guess < 0 || guess > 20){
            printf("I said the number is between 0 and 20.\n");
        }else if(randomNumber > guess){
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
            
        }else if(randomNumber < guess){
            printf("Sorry, %d is  wrong. My number is smaller than that.\n", guess);
        }else if(numberOfGuesses <= 1 && guess != randomNumber){
            printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);
        }
        
    }
    
    
    return 0;
}