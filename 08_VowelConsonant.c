//Author: Gulshan Sharma
//Purpose: Check whether the alphabet is vowel or consonent
#include <stdio.h>                        //Preprocessor directive to include input output function header file
int main()
{
    char ch;                                 //Declaring a variable of character data type

      
    printf("Enter any alphabet: ");          //Printf function calling to print an alphabet
    scanf("%c", &ch);                        //Scanf function calling to read user input

    switch(ch)                              //Start of Switch case
    {
        case 'a':                           //case
            printf("Vowel");                //Printf function calling to print vowel
            break;                          //Break statement
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':                
            printf("Vowel");                   
            break;                            
        case 'O':                        
            printf("Vowel");           
            break;                           
        case 'U':                              
            printf("Vowel");                 
            break;                            
        default:                                
            printf("Consonant");                
    }
    return 0;             //Return statement
}