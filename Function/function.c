#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


float average(){
    float sum[10];
    float total;
    float average;
    int array_size = 0;
    
    for(int i = 0; i < 10 ; i++){
        printf("Please enter number %d: ", i+1);
        scanf("%f", &sum[i]);
        total += sum[i];
        array_size += 1;
    }
    
    average = total/array_size;
    //printf("%ld\n",sizeof(sum[10]));
    //printf("%ld\n",sizeof(sum));
    printf("%d\n",array_size);
    printf("Your average is %0.2f.\n", average);
    
    return average;
    
}