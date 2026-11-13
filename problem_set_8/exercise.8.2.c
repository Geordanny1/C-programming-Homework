/* Student ID: 00348504
   Description:
   So, We have the function LetterHist. It takes a char pointer and an array. It fills the array
   with the apperence of each letter, it are store in alphabetical order.
   Souces:
    - https://stackoverflow.com/questions/702478/getting-alphabetical-number-of-a-char
*/

/*
  Write a function called LetterHist() that takes a string and and an
int array as parameters. The function builds a histogram by filling the count of each
letter in the string to the array. The zeroeth element of the histogram array should
contain the number of a’s in the String (upper and lower case); the 25th element should
contain the number of z’s. Your solution should only traverse the String once.
*/

# include <stdio.h>
# include <string.h>


int getAlphabeticalPosition(char);
void printIntArray(int values[], int count);
void LetterHist(char*, int*);

int main()

{
  char *foo = "bananana";
  int stringLength = strlen(foo);
  int container[52] = {};

  LetterHist(foo, container);
  printIntArray(container, 52);

  return 0;
}

void LetterHist(char* string, int *array)
{
  int stringLength = strlen(string);
  for (int i = 0; i < stringLength; i++) {
    int position = getAlphabeticalPosition(string[i]);
    array[position - 1] += 1;
    printf("%d\n", array[position]);
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

int getAlphabeticalPosition(char letter)
{

  int position = 0;

  /* ascii range lowerCase = [97, 122]; */
  /* Ascii range upperCase = [65, 91]; */
  if (letter >=  65 && letter <= 91) {
    position = (int)letter - 'A' + 1;
    printf("position: %d\n", (int)letter - 'A' + 1);
  } else {
    position = (int)letter - 'a' + 1;
    printf("position: %d\n", (int)letter - 'a' + 1);
  }

  return position;
}
