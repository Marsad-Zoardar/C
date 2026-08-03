//Author: Md Marsad Zoardar
//Date: July 26, 2026
//Cast and Sizeof

#include <stdio.h>

int main(int argc, char **argv)
{
    /*float a = 21.29;
    float b = 26.77;
    
    float c = a + b;
    
    printf("%d\n",(int) c);
    printf("%ld\n", sizeof(c));
    
    int i = -3;
    int k = i%2;
    printf("%d\n", k);
    
    int x = 5*9/3+9;
    printf("%d\n", x);
    */
    short int i = 20;
    char c = 97;
    
    printf("%ld, %ld, %ld\n", sizeof(i), sizeof(c), sizeof(c+i));
    
	return 0;
}
