//Author: Gulshan Sharma
//Purpose: Check no. is armstrong or not using while loop

#include <stdio.h>        //Pre-Process directive to include input output header file.
int main()
{
  int n, r, c, sum = 0, temp;  //function deceleration 
  printf("enter n value\n");   //printing the statement 
  scanf("%d", &n);          

  while(n>0)           //while loop 
  {
    r = n%10;
    c = r * r * r;
    sum = sum + c;
    n = n/10;
  }
  n = temp;
  
  if (n == sum)                //if statement
    printf("Armstrong");
  else                             //else statement
    printf("not am Armstrong");

  return 0;                 //return statement 
}
  