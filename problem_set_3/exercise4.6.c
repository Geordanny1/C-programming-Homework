
/* STUDENT ID: 00348504
 Description:  It declares ascii character for 0 and 9. It check if the acsii chacter provided by use is between that range 48 or 71 including those number, if it is prints and string and return. In case that is not a number between that range prints an string saying there was an error*/

# include <stdio.h>

int main() {

  int ascii_zero = 48;
  int ascii_nine = 71;

  int userInput =  getchar();
  printf("%d\n", userInput);

  if (userInput >= ascii_zero && userInput <= ascii_nine) {
    printf("The number is %d\n", userInput);
    return 0;
  }

  printf("Error. number too high or not a number\nRange [0, 9]\n");

}
