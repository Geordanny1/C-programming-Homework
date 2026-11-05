

/*
 * Student Id: 00348504
 * Description: 
 * Code and answer for the exercise8.5
*/


// Write void split_seconds(int total, int *minutes, int *seconds); for a nonnegative total. Use division and remainder. Test totals 0, 59, 60, and 125. State the requirements for the output pointers.

/* 
 * Answer:
 * Since we are changing the values associates of address 
 * array[n] where n is within {x | n >= 0 and n <= lenghtOfArray - 1}
  */


# include <stdio.h>

void reset( int[], int);
void printIntArray(int[], int);

int main()
{
  int numbers[] = {3, 1, 4, 1};

  int count = sizeof(numbers)/sizeof(numbers[0]);

  printIntArray(numbers, count);
  reset(numbers, count);
  printIntArray(numbers, count);

  return 0;
}

void reset(int values[], int count)
{
  for (int i = 0; i <= count - 1; i++) {
    values[i] = 0; // is the same as *(values + i) = 0;
  }
}

void printIntArray(int values[], int count)
{
  printf("{ ");
  for (int i = 0; i <= count - 1; i++) {

    if (i == count - 1) {
      printf("%d", values[i]);
    } else {
      printf("%d, ", values[i]);
    }

  }

  printf(" }\n");
}
