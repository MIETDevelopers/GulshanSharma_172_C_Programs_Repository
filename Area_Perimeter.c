//Author: Gulshan Sharma
//Purpose:To find the area and perimeter of Circle, Square and Rectangle

#include<stdio.h>
int main(){                    //Main Function body
	float radius;            //Data type & Variable declaration
	float side;
	float length;
	float breadth;

	scanf("%f %f %f %f", &radius, &side, &length, &breadth);

	printf("Area of Circle: %f\n", ((22 * radius * radius)/7));  //Print function calling           area of circle = (22/7)*r*r 

	printf("Perimeter of Circle: %f", ((2 * 22 * radius)/7));  //Print function calling            perimeter of circle = 2*(22/7)*r

	printf("Area of Square: %f\n", (side * side));  //Print function calling                    area of square = side*side

	printf("Perimeter of Square: %f\n", (4 * side));  //Print function calling                  perimeter of square = 4 * side of square

	printf("Area of Rectangle: %f\n", (length * breadth)); //Print function calling              area of rectangle = length * breadth

	printf("Perimeter of Rectangle: %f", (2 * (length + breadth))); //Print function calling             perimeter of rectange = 2 *(length + breadth)

	return 0;                      //Return Statement
}