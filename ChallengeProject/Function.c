//Author: Md Marsad Zoardar
//Date: August 4, 2026
//Function Challenge
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/*


//This function returns the greatest common divisor of two numbers (own algorithm)
int gcdValue(int a, int b){
    
    int gcd;
    int smallerValue;
    if(a < b){
        smallerValue = a;
    }else{
        smallerValue = b;
    }
    
    for (int i = 1; i <= smallerValue; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    
    return gcd;
}

//This function returns the absolute value of any given number
float absoluteValue(float x){
    
    if(x < 0){
        x = -x;
    }
    
    return x;
    
}

float squareRoot(float z){
    float sqrtNumber = absoluteValue(z);
    float answer = 0;
    
    if(z < 0){
        printf("Please avoid negative numbers.\n");
        return -1;
    }
    
    //answer = sqrtNumber/answer;
    answer = sqrt(sqrtNumber);
    
    return answer;
    
}


int main(){
    
    printf("%d\n", gcdValue(165, 90));
    printf("%0.2f\n", absoluteValue(2));
    printf("%0.2f\n", absoluteValue(-7));
    printf("%0.2f\n", squareRoot(-7));
    printf("%0.2f\n", squareRoot(100));
    
    return 0;
}

*/