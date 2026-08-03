//Author: Md Marsad Zoardar
//Date: July 24, 2026
//Program: Area of a rectangle

#include <stdio.h>

int main(int argc, char **argv)
{
	double height;
    double width;
    double perimeter;
    double area;
    
    //request the height and width
    printf("Enter the height of the rectangle:\n");
    scanf("%f", &height);
    printf("Enter the width of the rectangle:\n");
    scanf("%f", &width);
    
    //calculatng area and perimeter
    perimeter = 2*(height+width);
    area = height*width;
    
    //display
    printf("You entered the height = %f\n" , height);
    printf("You entered the width = %f\n" , width);
    printf("The perimeter of the rectangle = %f\n" , perimeter);
    printf("The area of the rectangle = %f\n" , area);
    
	return 0;
}
