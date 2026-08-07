//Author: Md Marsad Zoardar
//Date: August 4, 2026
//Tic Tac Toe Challenge
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void drawBoard();
int checkForWin();
int markBoard();

/*
int main(){
    
    //char grid[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char player1[20], player2[20];
    printf("Enter player 1 name: \n");
    fgets(player1, sizeof(player1), stdin);
    
    printf("Enter player 2 name: \n");
    fgets(player2, sizeof(player2), stdin);
    
    
    printf("%s and %s playing Tic Tac Toe. %s is X and %s is 0.\n", player1, player2, player1, player2);
    
    
    
    
    
    drawBoard();
    
    return 0;
}

//Draws a 3x3 board
void drawBoard(){
    
    
    for(int j = 0; j < 10; j++){
            
            if(j == 0){
                for(int i = 0; i < 3; i++){
                    printf("\t*\t*\n");
                }
            }
            else if(j == 4){
                printf("************************\n");
            }
            else if(j ==5){
                for (int k = 0; k < 3; k++){
                    printf("\t*\t*\n");
                }
            }
            else if(j == 8){
                printf("************************\n");
                
                    for(int m = 0; m < 3; m++){
                        printf("\t*\t*\n");
    
                    }
    
            }
    
    }
}

*/