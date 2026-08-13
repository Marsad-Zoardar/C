//August 12, 2026
//Quiz 12
#include <stdio.h>

void m(int *p);
void fun(int x);
void fun2(int *ptr);
void fun3(int *a, int *b);

int main(int argc, char **argv)
{
//	int i = 10;
//    int *p = &i;
//    
//    *p = 15;
//    
//    printf("%d\n", i);

//    int *ptr, a = 10;
//    
//    ptr = &a;
//    
//    *ptr += 1;
//    
//    printf("%d, %d\n", *ptr, a);


//    int const *p = 5;
//    
//    printf("%d\n", ++(*p)); //gives compiler error. You cannot change a constant


/*    printf("%d\n", sizeof(void*)); //4 or 8, depending on the computer
    
    int a = 15;
    void *ptr = (int*) &a; ///////////////////This program gives a compiler error due to invalid use of a void expression
    
    printf("%d\n", *ptr);
     * 
*/    

//    int a = 15;
//    void *ptr = (int*) &a;
//    
//    printf("%d\n", *(int*) ptr);


//    int a[5] = {1, 2, 3, 4, 5};
//    int *p = a;
//    printf("%d\t%d\t%d\t%d\t", *p, a[0], a, p);
//    int a[5] = {6, 5, 3};
//    m(a);
//
//        
//    int y = 20;
//    fun2(&y);
//    printf("%d\n", y);
    
    int x = 10;
    int y = 20;
    
    fun3(&x, &y);
    
    printf("x = %d\t y = %d\n", x, y);
    
	return 0;
}




void m(int *p){
    
    int i = 0;
     
     for(i = 0; i < 5; i++){
         printf("%d\t", p[i]);
     }
     printf("\n\n");
    
    
}

void fun(int x){
    x = 30;
}

void fun2(int *ptr){
    *ptr = 30;
}

void fun3(int *a, int *b){
    *a = *a + *b;   //if *a = 10, and *b = 20, then 
    *b = *a - *b;   //
    *a = *a - *b;
}