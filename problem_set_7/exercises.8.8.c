/*
 * Student Id: 00348504
 * Description:
 *
 * Refecen used: https://www.youtube.com/watch?v=n_Se6bt8jM0 
*/


// Exercise 8 Allocate and initialize

// Allocate space for eight integers using malloc. Check for failure, store the values 5 through 40 in steps of 5, and print them. Release the allocation. Explain why printing the elements before initialization would be incorrect.

# include <stdio.h>
# include <stdlib.h>

void printIntArray(int values[], int count);

int main()
{

  /* since malloc takes the size in bits and we want 8 integer, I would sizeof(integer) * 8;  */

  int count = 8;
  int startingPoint = 5;
  int *numbers = malloc(sizeof(int) * count);

  if (numbers == NULL) {
    return 1;
  }

  for (int i = 0; i <= count; i++) {
    numbers[i] += startingPoint;
    startingPoint += 5;
  }

  printIntArray(numbers, count);

  free(numbers);
  numbers = NULL;

  return 0;
}

void printIntArray(int values[], int count)
{
  printf("{ ");
  for (int i = 0; i <= count ; i++) {

    if (i == count) {
      printf("%d", values[i]);
    } else {
      printf("%d, ", values[i]);
    }

  }

  printf(" }\n");
}
