//Author: Md Marsad Zoardar
//July 26, 2026
//Bitwise Operator

#include <stdio.h>

int main(int argc, char **argv)
{
	
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 0000 0000 0000 0000 0000 0000 0000 1101
	int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    
//bitwise AND   
    c = a & b;
    // 0000 0000 0000 0000 0000 0000 0000 1100
//bitwise OR
    d = a | b;
    // 0000 0000 0000 0000 0000 0000 0011 1101
//Shift left
    e = a << 2;
    // 0000 0000 0000 0000 0000 0000 1111 0000
//shift right
    f = a >> 2;
    // 0000 0000 0000 0000 0000 0000 0000 1111
    
 
    printf("The result of C is: %d\n", c);
    printf("The result of D is: %d\n", d);
    printf("The value of A after left shift: %d\n", e);
    printf("The value of A after right shift: %d\n", f);
    
    int size = sizeof(d);
    printf("%d\n", size);
    
    return 0;
}
