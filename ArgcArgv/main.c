//Author: Md Marsad Zoardar
//Date: July 24, 2026
//Program: argc argv explained

#include <stdio.h>

int main(int argc, char **argv)
{
	//initializing variables
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    
    //printing out the result
    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    
    
	return 0;
}
