//Author:Gulshan Sharma 
//Purpose:Arithmetic operations using addition, subtraction, multiplication and remainder operator



#include<stdio.h>
int main(){            //Main function
    char operator;
    double x, y;
    printf("Enter an operator (+, -, *, /): ");   //It will print the operator which will be entered by the user.
    scanf("%c", &operator);                       //Operator will be scaned here which is entered by the user.
    printf("value of the two operands are:");
    scanf("%lf %lf",&x, &y);                      //It will scan the Number added by the user.
    switch(operator){
        case '+':
            printf(" %.lf + %.lf = %.lf",x, y, x+y);  //Addition Function
            break;
        case '-':
            printf(" %.lf - %.lf = %.lf",x, y, x-y);  //Subtraction Function
            break;
        case '*':
            printf(" %.lf * %.lf = %.lf",x, y, x*y);  //Multiplication Function
            break;
        case '/':
            printf(" %.lf / %.lf = %.lf",x, y, x/y);  //Division Function
            break;
    printf("Error observed by the input values");
    }
    return 0;                          //Return Statement
}