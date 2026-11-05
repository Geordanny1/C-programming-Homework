/*
  student ID: 00348504 
  Description:
    We have 3 functions getFirstNumber(), getSecondNumber(), printRange().
      getFirstNumber(void). Takes a number in the range of [1,10] and return it. In case the numebr is out of rango
      it keeps asking unttil the range is correct.

      getSecondNumber(int <loweBound>). Asks the user for a number input within the range [lowerBound, 15]. In case the number is out of range
      keeps asking untill the range is correct.

      printRange(int <lowerBound>, int <upperBound>) prints all the range within the range [lowerBound, upperBound]

      Inside the main there is combination of using these functions together 
*/

# include <stdio.h>
# include <stdbool.h>

int getFirstNumber(void);
int getSecondNumber(int);
void printRange(int, int);

int main()
{

  // int foo = getFirstNumber();

  // int waldo  = getSecondNumber(1);

  // printf("%d\n", foo);
  // printf("%d\n", waldo);


  int lowerBound = getFirstNumber();
  int upperBound = getSecondNumber(lowerBound);

  printRange(lowerBound, upperBound);

  return 0;

}

int getFirstNumber(void)
{

  int firstAttempt = true;

  int number = 0;
  puts("range [1,10]");

  while (number < 1 || number > 10) {

    if (!firstAttempt) {
      printf("Error. range [1,10]\n");
    }

    firstAttempt = false;
    scanf("%d", &number);
  }

  return number;

}


int getSecondNumber(int lowerBound)
{

  int firstAttempt = true;

  int upperBound = 15;
  int number     = 0;

  printf("range [%d, %d]\n", lowerBound, upperBound);

  while (number < lowerBound || number > upperBound) {

    if (!firstAttempt) {
      printf("Error. range [%d,%d]\n", lowerBound,upperBound);
    }

    firstAttempt = false;
    scanf("%d", &number);
  }

  return number;

}


void printRange(int lowerBound, int upperBound)
{
  // printf("loweBound:%d\nupperBound: %d\n", lowerBound, upperBound);
  printf("printing number from %d up to %d\n", lowerBound, upperBound);

  for (int i = lowerBound; i <= upperBound; i++) {
    printf("%d\n", i);
  }

}
