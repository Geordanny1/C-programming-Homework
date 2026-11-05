
/* STUDENT ID: 00348504
 Description: Set the function prototype for the Rolldice and changeSeed. I define rollDice and changeSeed function.
 rollDrice it generates a random number and then it prints it. It does not behave as I aspect*/

# include <stdio.h>

void validate(int);


int main(){
  validate(0);
  validate(3);
  validate(-2);
}

void validate(int number){
  if (number == 0) {
    printf("Error Message\n");
    return;
  }

  printf("%d\n", number * 2);

}


