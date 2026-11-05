/* student ID: 00348504 */
/* Description: Code for Exercises 3.1. I evalueta the value of each expression
  and operation*/

# include <stdio.h>

/* Exercise 3.1 */

int main()
{
  int    x = 2;
  double y = 1.2;
  char   z = 'A';

  printf("Value of x: %d\n", x);
  printf("Value of y: %f\n", y);
  printf("Value of z: %c\n", z);

  printf("The result of x + 1 = %d\n", x + 1);
  printf("The result of x + y = %f\n", x + y);
  printf("The result of x / 3 = %d\n", x / 3);
  printf("The result of x / 3.0 = %d\n", x / 3.0);
  printf("The result of (int)y = %d\n", (int)y);
  printf("The result of (int)z = %d\n", (int)z);
}

