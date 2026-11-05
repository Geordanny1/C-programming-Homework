
/* STUDENT ID: 00348504
 Description:
  We have 4 funciton get_random_number, ask_for_play, ask_for_play and play.
  Play starts a game, get_random_number get ask_for_play ask the  user wanna, ask_for_quit asks if the user wants to quit, play starts a guessin game.
 */



# include <stdio.h>
# include <stdlib.h>
# include <math.h> 
# include <time.h> 
# include <stdbool.h>

int get_random_number(void);
bool ask_for_quit(void);
bool ask_for_play(void);
void play(int, int);

int main()
{

  srand(time(0));

  bool wanna_play = ask_for_play();

  while (wanna_play) {
    int random_number = get_random_number();
    int number_of_attemps = 3;
    play(number_of_attemps, random_number);

    wanna_play = ask_for_quit();
  }

  return 0;

}

bool ask_for_quit()
{


  puts("Wanna  quit? q for quit\nAny another character to keep playing\n");
  char option;

  scanf(" %c", &option);

  if (option == 'q') {
    return !false;
  }

  return true;

}


bool ask_for_play(void)
{

  puts("Wanna  play? Y/y");
  char option = getchar();

  if (option == 'y' || option == 'Y') {
    return true;
  }

  return false;

}

void play(int attempts, int secret_number)
{

  int guess;

  printf("guess the secret number\nNumber of attemps: %d\n\n", attempts);

  if (attempts == 0) {

    printf("You loss!\n");
    printf("The number was %d\n\n", secret_number);
    return;
  }

  scanf("%d", &guess);

  if (guess  == secret_number) {
    puts("You win!");
    printf("The number was %d\n\n", secret_number);
    return;
  }

  play(attempts-1, secret_number);

}

int get_random_number(){
  int randdom_number = rand() % 10 + 1;
  return randdom_number;
}

