
/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.2
  This exercises is about finding the error in a program and then fix it.

*/
#include <stdio.h>
#include<stdlib.h>

int main (void)
{
  int number = 20;

  int lastDigit = number%10;
  // first it take the ramainder of dividing the number by 10, 
  // in this case it 10 goes 7 times and 1 remainder
  
  int firstDigit = number/10;
  // then we get the quotiont of dividing the number by 10,
  // 71 divide by 10, is 7 with 1 remainder

  printf("last digit %d\n",lastDigit);
  printf("first digit %d\n",firstDigit);

  // then we just add then and that is the error
  printf("%i\n",lastDigit + firstDigit);

  printf("%d%d\n",lastDigit, firstDigit);
  return EXIT_SUCCESS;
}
