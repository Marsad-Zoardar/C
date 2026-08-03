//Author: Md Marsad Zoardar
//Date: July 27, 2026
//Calculate Paycheck

#include <stdio.h>

/*int main(int argc, char **argv){
    
    //Take input from the user
    float numberOfHours = 0;
    printf("Enter the number of hours you worked this week: ");
    scanf("%f", &numberOfHours);
    
    float tax = 0;
    float total = numberOfHours * 12;
    float grossPay = 0;
    float overtime = 0;
    
    if(numberOfHours <= 40){
        if(total <= 300){
            tax = total * 0.15;
            grossPay = (total - tax);
            printf("Your tax: %f\n", tax);
            printf("Your gross income: %f\n", grossPay);
        }
        else if(total <= 450 && total > 300){
            tax = (300*0.15)+((total - 300) * 0.20);
            grossPay = total - tax;
            printf("Your tax: %f\n", tax);
            printf("Your gross income: %f\n", grossPay);
        }
        else if(total > 450){
            tax = (300*0.15)+(150*0.2)+((total - 450)*0.25);
            grossPay = total - tax;
            printf("Your tax: %f\n", tax);
            printf("Your gross income: %f\n", grossPay);
        }
        
    }else if(numberOfHours > 40){
        overtime = (numberOfHours - 40) * 18;
        total = 40*12 + overtime;
        tax = (300*0.15)+(150*0.2)+((total - 450)*0.25);
        grossPay = total - tax;
        printf("Your tax: %f\n", tax);
        printf("Your gross income: %f\n", grossPay);
    }
    
    return 0;
    
    
}
*/