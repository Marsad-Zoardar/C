//Author: Md Marsad Zoardar
//August 12, 2026
//Pointers use case


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;
    
    pnum = &num1;
    printf("The value of pnum after \"pnum = &num1\": %p\n\n", (void*) pnum);  //The value should be the address of num1, a hex number
    *pnum = 2L;
    printf("The value of *pnum after \"*pnum = 2L\": %ld\n\n", *pnum);        //The value of num1 is changed to 2
    ++num2;
    printf("The value of num2 after \"++num2\": %ld\n\n", num2);              //The value of num1 is incremented by 1, and it should be 1; 
    num2 += *pnum;
    printf("The value of num2 after \"num2 += *pnum\": %ld\n\n", num2);      //The value of num2 should be 1 + 2 = 3
    
    pnum = &num2;
    printf("The value of pnum after \"pnum = &num2\": %p\n\n", (void*) pnum);   //The address of num2
    ++*pnum;
    printf("The value of *pnum after \"++*pnum\": %ld\n\n", *pnum);         //Now pnum has the address of num2, so the value should be 3 and then incremented
    
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum+num2 = %ld\n", num1, num2, *pnum, *pnum+num2);
    
	return 0;
}
