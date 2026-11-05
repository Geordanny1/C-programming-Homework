/*
 * Student Id: 00348504
 * Description:
 * Takes a total and calculates the amount of minutes and seconds inside that total.
*/



void split_seconds(int, int*, int*);

# include <stdio.h>


int main()
{
  int total   = 90;
  int minutes = 0;
  int seconds = 0;

  int *ptrMinutes = &minutes;
  int *ptrSeconds = &seconds;

  split_seconds(total, ptrMinutes, ptrSeconds);

  printf("The amount of minutes in %ds is %d minute\\s and %d second\\s \n",total , minutes, seconds);

  return 0;

}

void split_seconds(int total, int *minutes, int *seconds)
{
  if (total < 0) {
    printf("Negative total\n");
    return; 
  }

  int totalMinutes = total/60;
  int totalSeconds = total%60;
  *minutes = totalMinutes;
  *seconds = totalSeconds;
  return;

}
