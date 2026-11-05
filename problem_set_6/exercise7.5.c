/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.5
  I create a prototype and define multiple functions: sum, fillArray, printIntArray.
  an integer array[], an index, an int length, an int maxLength. It promps the user to fill the array with numbers.
  Sum takes an integer array and then return the sum of all them.
  finally on the main function I test all of them.
*/

# include <stdio.h>

int sum(int, int[]);
void fillArray(int[], int, int, int );
void printIntArray(int,  int[]);

int main()
{

  int maxSize = 20;

  int numbers[maxSize];

  int startingIndex = 0;
  int arrayLength   = 0;

  fillArray(numbers, startingIndex, arrayLength, maxSize);

  int arraySize = sizeof(numbers)/sizeof(numbers[0]);
  printIntArray(arraySize,numbers);

  int total = sum(arraySize, numbers);

  printf("The sum of all the number is: %d\n", total);

  return 0;
}

int sum(int length, int numbers[])
{
  
  int lastIndex = length -1;

  int total = 0;
  for (int i = 0; i <= lastIndex; i++) {
    total += numbers[i];
  }
  return total;

}

void fillArray(int array[], int index, int length, int maxLength){

  if (length == maxLength ) {
    return;
  }

  int userInput;

  puts("Enter a number to fill the array");
  scanf(" %d", &userInput);

  if (userInput < 0) {
    return;
  }

  array[index] = userInput;

  fillArray( array, index +1, length+1, maxLength );

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
