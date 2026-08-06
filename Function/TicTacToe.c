//Author: Md Marsad Zoardar
//Date: August 4, 2026
//Tic Tac Toe Challenge Solution provided by Jason Fedin
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <conio.h>


char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player, checkValid;

int checkForWin();
void displayBoard();
void markBoard(char mark);
void validMoveChecker();

int main(){
    
    int gameStatus;
    char mark;
    
    player = 1;
    
    do{
       displayBoard();
       
       //change turns
       player = (player % 2) ? 1 : 2;
       
       //get input
       printf("Player %d, enter a number: ", player);
       scanf("%d", &choice);
       
       if(checkValid == 0){
            //set the correct character based on user choice
            mark = (player == 1) ? 'X' : 'O';
       
            markBoard(mark);
       
       }
       
       gameStatus = checkForWin();
       
       player++;
        
        
    }while(gameStatus == -1);
    displayBoard();
    
    if(gameStatus == 1){
        printf("Player %d wi\n ", --player);
    }
    else{
        printf("Draw");
    }

    return 0;
}

/****************************
Function to return the game status
Game is over with result = 1
Game is in progress = -1
Game is over and no result = 0
*****************************/
int checkForWin(){
    
    int returnValue = 0;
    
    if(square[2] == square[2] && square[2] == square[3]){
        returnValue = 1;
    }
    else if(square[4] == square[5] && square[5] == square[6]){
        returnValue = 1;
    }
    else if(square[7] == square[8] && square[8] == square[9]){
        returnValue = 1;
    }
    else if(square[1] == square[4] && square[4] == square[7]){
        returnValue = 1;
    }
    else if(square[2] == square[5] && square[5] == square[8]){
        returnValue = 1;
    }
    else if(square[3] == square[6] && square[6] == square[9]){
        returnValue = 1;
    }
    else if(square[1] == square[5] && square[5] == square[9]){
        returnValue = 1;
    }
    else if(square[3] == square[5] && square[5] == square[7]){
        returnValue = 1;
    }
    else if(square[1] != '1' && square[2] != '2' && square[3] != 3 &&
            square[4] != '4' && square[5] != '5' && square[6] != 6 &&
            square[7] != '7' && square[8] != '8' && square[9] != 9){
                returnValue = 0;
    }
    else
        returnValue = -1;
        
    
    return returnValue;        
    
}

/******************************************************
Function to clear the screen.
******************************************************/

void clearScreen(){
    printf("\e[1J\e[H");
}

/******************************************************
Function to draw board of tic tac toe with players mark
******************************************************/

void displayBoard(){
    
    
    //system("cls"); //This is a windows specific command to clear the screen, will not work for other OS. 
    clearScreen();
    printf("Player 1 (X) - Player 2 (0)\n\n");
    
    printf("     |      |       \n");
    printf(" %c   |  %c   |  %c  \n", square[1], square[2], square[3]);
    
    printf("_____|______|_____\n");
    printf("     |      |     \n");
    
    printf(" %c   |  %c   |  %c  \n", square[4], square[5], square[6]);
    
    printf("_____|______|_____\n");
    printf("     |      |     \n");
    
    printf(" %c   |  %c   |  %c  \n", square[7], square[8], square[9]);
    
}

/*************************************************
 * Set the board with the correct character. X or O 
 * in the correct spot in the array. 
 * ***********************************************/

void markBoard(char mark){
    
    if(choice == 1 && square[1] == '1'){
        square[1] = mark;
    }
    else if(choice == 2 && square[2] == '2'){
        square[2] = mark;
    }
    else if(choice == 3 && square[3] == '3'){
        square[3] = mark;
    }
    else if(choice == 4 && square[4] == '4'){
        square[4] = mark;
    }
    else if(choice == 5 && square[5] == '5'){
        square[5] = mark;
    }
    else if(choice == 6 && square[6] == '6'){
        square[6] = mark;
    }
    else if(choice == 7 && square[7] == '7'){
        square[7] = mark;
    }
    else if(choice == 8 && square[8] == '8'){
        square[8] = mark;
    }
    else if(choice == 9 && square[9] == '9'){
        square[9] = mark;
    }
    else{
        validMoveChecker();
        
        //getch();
    }
}

/*********************************************************
This function checks if the move is valid or not
 * I had to write this function as I couldn't get the nice
 * getch() function on linux. I had to make my own function
 * to keep getting input from the user.
*********************************************************/

void validMoveChecker(){
    
    checkValid = 0;
    
        if(choice != 1 || choice != 2 || choice != 3 || choice != 4 || choice != 5 || choice != 6 ||
            choice  != 7 || choice != 8 || choice != 9){
                    
            checkValid = 1;
        }
        else if(choice == '1' && square[1] != '1'){
            checkValid = 1;
        }
        else if(choice == '2' && square[2] != '2'){
            checkValid = 1;
        }
        else if(choice == '3' && square[3] != '3'){
            checkValid = 1;
        }
        else if(choice == '4' && square[4] != '4'){
            checkValid = 1;
        }
        else if(choice == '5' && square[5] != '5'){
            checkValid = 1;
        }
        else if(choice == '6' && square[6] != '6'){
            checkValid = 1;
        }
        else if(choice == '7' && square[7] != '7'){
            checkValid = 1;
        }
        else if(choice == '8' && square[8] != '8'){
            checkValid = 1;
        }
        else if(choice == '9' && square[9] != '9'){
            checkValid = 1;
        }
        else{
            checkValid = 0;
        }
    
    do{
        printf("Invalid move. Please enter an available number: ");    
        scanf("%d", &choice);
        player--;
        
        if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 ||
           choice  == 7 || choice == 8 || choice == 9){
                checkValid = 0;
                displayBoard();
        }
        else if(choice == '1' && square[1] == '1'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '2' && square[2] == '2'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '3' && square[3] == '3'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '4' && square[4] == '4'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '5' && square[5] == '5'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '6' && square[6] == '6'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '7' && square[7] == '7'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '8' && square[8] == '8'){
            checkValid = 0;
            displayBoard();
        }
        else if(choice == '9' && square[9] == '9'){
            checkValid = 0;
            displayBoard();
        }
                
        }while(checkValid == 1);
    
}
