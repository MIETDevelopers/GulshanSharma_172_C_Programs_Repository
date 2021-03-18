//Author:Gulshan Sharma
//Purpose: A C Program to calculate Factorial of a number.

#include<stdio.h>  
int main()                            //Main Function Body
{    
 	int i,factorial=1,number;    
 	printf("Enter a number: ");    
 	scanf("%d",&number);              //number entered by the user will be scanned her  
   	 for(i=1;i<=number;i++){    
 	     factorial=factorial*i;    
  }    
  printf("Factorial of %d is: %d",number,factorial);    
return 0;                                //Return Statement  
} 