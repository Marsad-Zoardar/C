#include <stdio.h>
#include <string.h>

int arr[] = {1, 2, 3};//used in question 2
int x = 0;

//Question 7
void fun(char *k){
    printf("%s", k);
}

int main(int argc, char **argv)
{
	
    //Quaestion 1
    char *ptr;
    
    char myString[] = "abcdefg";
    
    ptr = myString;
    ptr += 5;
    
    printf("%s \n", ptr);
    
    //Question 2
    int *ptr2;
    ptr2 = arr;
    ptr2 = ptr2 + 3;
    printf("%d \n", *ptr2);
    
    //Question 3
    char *ptr3;
    char string[] = "learn academy";
    ptr3 = string;
    ptr3 += 6;
    printf("%s\n", ptr3);
    
    //Question 4
    int *ptr4 = &x;
    printf("%p\n", ptr4);
    x++;    //Just incrementing the value at the same address
    printf("%p\n", ptr4);
    
    //Question 5
//    char *str = "hello, world\n";
//    char *strc = "good morning\n";
//    
//    strcpy(strc, str);
//    
//    printf("%s\n", strc);
    
    //Question 6
    char *str = "hello world\n";
    char strc[] = "good morning\n";
    
    strcpy(strc, str);
    
    printf("%s\n", strc);
    
    //Question 7
    char s[] = "hello";
    fun(s);
    
    //Question 8
    char *a[] = {"Hello", "World"}; //Valid
    char *a1[] = {"Hello", "Worlds"}; //Valid
    char *b = "Hello"; //Valid
    char *c = "World"; //Valid
    char *a3[] = {b, c}; //Valid
    
    
    
	return 0;
}
