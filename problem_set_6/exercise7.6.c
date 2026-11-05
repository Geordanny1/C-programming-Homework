/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.6
  Here there are 3 functions, indexOfMaxInRange, swapElement, sortArray.
  Once the prototype and definition are written, I tested on the main program.
*/

# include <stdio.h>

int  indexOfMaxInRange(int[], int, int); 
void swapElement(int[], int, int); 
void printIntArray(int,  int[]); 
void sortArray(int[], int);

int main()
{

  int numbers[10]   = { 12, 110, 210, 40, 50, 30, 72, 80, 10, 8 };
  int length  = sizeof(numbers)/sizeof(numbers[0]);

  printIntArray(length, numbers);

  sortArray(numbers, length);

  printIntArray(length, numbers);

  return 0;
}

int indexOfMaxInRange(int array[], int lowerBound, int upperBound)
{


  int biggestNumber = array[lowerBound];

  int biggestNumberIndex = lowerBound;

  for (int i = lowerBound; i <= upperBound; i++) {
    if (array[i] > biggestNumber) { 
      biggestNumber = array[i];
      biggestNumberIndex = i;
    }
  }

  return biggestNumberIndex;
}

void swapElement(int array[], int firstIndex, int secondIndex)
{ 

  int temp = array[firstIndex];
  array[firstIndex] = array[secondIndex];
  array[secondIndex] = temp;

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



void sortArray(int array[], int length)
{

  int lastIndex = length -1;

  for (int i = 0; i <= lastIndex; i++) {

    int biggestCurrentNumber = indexOfMaxInRange(array, i, lastIndex);

    swapElement(array, biggestCurrentNumber, i);

  }

  // for(int i = 0; i <= lastIndex; i++) {
  //   int currentNumber = array[i];
  //
  //   for (int j = 0; j <= lastIndex; j++) {
  //     if (currentNumber < array[j]) {
  //       swapElement(array, i, j);
  //     }
  //
  //   }
  //
  // }

}
