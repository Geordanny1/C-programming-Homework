/*
 * Student Id: 00348504
 * Description:
 * So, on exercises 8.9 I need to find each individual number of apprences on a given category set of categories,
 * on this case {0, 2, 1, 2, 2, 0} each unique category is 0,1,2 and the expected output is 2,1 and 3.
 *
 * Reference:
 * https://www.youtube.com/watch?v=l8DU9ZeT3o8 Example of how to use calloc.
*/


# include <stdio.h>
# include <stdlib.h> 

void printIntArray(int values[], int count);

void valueApperences(int[], int, int, int*);

int main()
{

  int categories[] =  { 0, 2, 1, 2, 2, 0 };
  int arrayLength = sizeof(categories)/sizeof(categories[0]);
  int uniqueCategories = 3;

  int *counts = calloc(uniqueCategories, sizeof(int));

  if (counts == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  // int slotFirst = 0;
  // valueApperences(categories, arrayLength, target, &slotFirst);
  //
  // int slotSecond = 0;
  // valueApperences(categories, arrayLength, target, &slotSecond);
  //
  // int slotThird = 0;
  // valueApperences(categories, arrayLength, target, &slotThird);

  for (int i = 0;  i < uniqueCategories;  i++) {
    int target = i;
    int slot  = 0;
    valueApperences(categories, arrayLength, target, &slot);
    counts[i] = slot;
  }

  printIntArray(counts, uniqueCategories);

  free(counts);
  counts = NULL;

  return 0;
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

void valueApperences(int values[], int arrayLength, int target, int *slot)
{
  int apperences = 0;
  for (int i = 0; i <= arrayLength - 1; i ++) {
    if (values[i] ==  target) {
      // printf("%d \n", i);
      apperences += 1;
    }}
  *slot = apperences;

}
