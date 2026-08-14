//Author: Md Marsad Zoardar
//August 14, 2026
/*Structures Challenge
 * We need to create a C program that creates a structure pointer and passes it to a function
 * -> The struct is going to have these following elements
 *      #itemName - pointer
 *      #quantity - int
 *      #price - float
 *      #amount - float
 * ->create a function named readItem that takes a structure pointer of type item as a parameter
 *      >>This function should take input from the user a product name, price, and quantity
 *      >>The contents read in should be stored in the passed in structure to the function
 * ->create a function named printItem that takes a structure pointer of type item as a parameter
 *      >>function prints the content of the parameter
 * ->the main function should declare an item and a pointer to the item
 *      >>we will need to allocate memory for the itemName pointer
 *      >>the item pointer should be passed into both the read and print item functions
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//initialization of the structure
struct item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i);//function to take user input
void printItem(struct item *p);//function to print the structure


int main(int argc, char **argv){
    
    struct item itm;
    struct item *pItem;
    
    pItem = &itm;
    
    pItem->itemName = (char*) malloc(30*sizeof(char));
    
    if(pItem == NULL){  //Checking for NULL condition is important
        exit(-1);
    }
    
    //read item
    readItem(pItem);
    
    //Print item
    printItem(pItem);
    
    free(pItem->itemName); //freeing the memory allocated
    
    return 0;
}


//This function reads the item from user input
void readItem(struct item *i){
    
    printf("Please enter the name of the product: ");
    scanf("%s", i->itemName);
    printf("\nPlease enter the price of the product: ");
    scanf("%f", &i->price);
    printf("\nPlease enter the quantity of the product: ");
    scanf("%d", &i->quantity);
   
    
    i->amount = (float)i->quantity * i->price;
}

//This function just prints the item
void printItem(struct item *p){
    printf("\nName: %s", p->itemName);
    printf("\nPrice: %0.2f", p->price);
    printf("\nQuantity: %d", p->quantity);
    printf("\nAmount: %0.2f\n\n", p->amount);
}