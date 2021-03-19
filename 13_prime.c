//Author: Gulshan Sharma
//Purose: Check if a number is prime or not using while loop

#include <stdio.h>   //Preprocessor to include the standard input and output funtions
int main()           //main function
{
   int a, i, c=0;     //declaration
 	printf("Enter number to check prime number or not");   //printing of number which need to be check
    scanf("%d",&a);
    i=2;
    while( i<=a/2)     //introduction of while loop
    {
        // check for non prime number
        if(a%i==0)
        {
            c=1;
            break;
        }
        i++;
    }
 
    if (c==0)           //if statement introduced
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
 
    return 0;       //return statement
    
}