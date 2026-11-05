
/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.3
  This exercises is about finding the error in a program and then fix it.
*/

#include <stdio.h>
#include <stdlib.h>

void printCharArray(int,  char[]);

int main (void)
{
  char foo[3];

  char charArray[3];


  scanf(" %s", foo);

  charArray[0] = foo[0];
  charArray[1] = foo[1];
  charArray[2] = foo[2];

  int arraySize = sizeof(charArray)/sizeof(charArray[0]);

  printCharArray(arraySize, charArray);

  return EXIT_SUCCESS;
}


void printCharArray(int arraySize, char array[])
{
  int lastElementIndex =  arraySize - 1;

  printf("[ ");

  for (int i = 0; i <= lastElementIndex; i++) {

    if (i == lastElementIndex) {
      printf("%c ", array[i]);
    } else {
      printf("%c, ", array[i]);
    }
  }

  puts("]");

  printf("the array has %d elements \n", arraySize);

}
