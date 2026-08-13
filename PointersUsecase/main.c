//Author: Md Marsad Zoardar
//August 12, 2026
//Pointers use case


#include <stdio.h>
#include <stdlib.h>

int square(int *x);

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
    
    
    ////////////////////////////////Const Modifier///////////////////////////////////////
    
    //long value = 9999L;
    //const long *pointer = &value; //The value becomes a constant
    
    //int count = 43;
    //int *const newPointer = &count; //The pointer becomes a constant
    /////////////////////////////////////////////////////////////////////////////////////
    
    ////////////////////////////////void*////////////////////////////////////////////////
    
    int i = 10;
    float f = 2.34;
    char ch = 'k';
    
    void *vptr;
    
    vptr = &i;
    printf("Value of i = %d\n", *(int*)vptr);
    
    vptr = &f;
    printf("Value of f = %0.2f\n", *(float*)vptr);
    
    vptr = &ch;
    printf("Value of ch = %c\n", *(char*)vptr);
    
    
    int w = 99;
    
    //square(&w);
    
    printf("The square of the given number is: %d\n", square(&w));
    
    
	return 0;
}


int square(int *x){
    
    int i = (*x)*(*x);
    
    return i;
}