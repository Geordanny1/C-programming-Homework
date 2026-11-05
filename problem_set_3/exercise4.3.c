
/* STUDENT ID: 00348504
 Description:  I set the function prototype for the Rolldice and changeSeed. I define rollDice and changeSeed function.
 rollDrice it generates a random number and then it prints it. It does not behave as I aspect*/

# include <stdio.h>
# include <time.h>
# include <stdlib.h>


int rollDice();
int changeSeed();

int main()
{
  rollDice();
  changeSeed();

  rollDice();
  changeSeed();

  rollDice();
  changeSeed();


  rollDice();
  changeSeed();

  return 0;
}

int rollDice(){
  int number_random = rand() % 6 + 1;
  printf("%d\n", number_random);
}

int changeSeed(){
  srand(time(0));
}
