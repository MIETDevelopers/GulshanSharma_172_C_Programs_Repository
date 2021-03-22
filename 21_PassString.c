//Author: Gulshan Sharma
//A C Program for passing string to a Function. 			© Ishav Verma 19/March/2021

#include <stdio.h>  //Pre-process directive to include standard input and output functions header file
void displayString(char str[]);

int main()      //Main Function
{
    char str[50];                 // Decleration
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;             //Return Statement
}
void displayString(char str[])
{
	//This will give output.
    printf("String Output: ");
    puts(str);
}