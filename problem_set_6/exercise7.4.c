/* student ID: 00348504 */
/*
  Description: Code for Exercises 7.3
  I create a prototype and define a function called findTarget. It return 1 if the target was found, 0 otherwise. 
*/

# include <stdio.h>

int findTarget(int[],int , int);
void printIntArray(int,  int[]);

int main()
{

  int numbers[] = {1,2,3,4,5,6,7,8,9}; 
  int length = sizeof(numbers)/sizeof(numbers[0]);
  int target = 5;

  findTarget(numbers, length, target);
  printIntArray(length, numbers);

  return 0;
}


int findTarget(int array[], int length ,int target)
{
  int lastIndex = length - 1;
  for (int i = 0; i <= lastIndex; i++) {
    if (target == array[i] ) {
      printf("found %d at index %d\n", target, i);
      return 1;
    }
  }

  printf("Not found\n");
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

  printf("the length of arary: %d\n", arraySize);

}
