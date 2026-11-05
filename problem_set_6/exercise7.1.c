
/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.1
  I created the prototype and the definition for function that prints all numbers in an array.
*/

# include <stdio.h>

void printIntArray(int,  int[]);

int main()
{
  int numbers[] = {1,2,3,4,5,6,7};

  int size = sizeof(numbers)/sizeof(numbers[0]);

  printIntArray(size, numbers);

  return 0;
}

void printIntArray(int arraySize, int array[])
{
  int lastElementIndex =  arraySize - 1;

  printf("[ ");

  for (int i = 0; i <= lastElementIndex; i++) {

    if (i == lastElementIndex) {
      printf("%d ", array[i]);
    } else {
      printf("%d, ", array[i]);
    }
  }

  puts("]");

  printf("the size of the array is %d\n", arraySize);

}
