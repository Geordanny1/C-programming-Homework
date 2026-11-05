
/* STUDENT ID: 00348504
 Description:  This is the exercise 4.2 It prints a string. On the comments I put a number that represents the other on what
 the of what think the statement was execute  */


#include <stdio.h>
#include <stdlib.h>
void zippo (int, int);
void baffle (int);

int main (void) {
  zippo (5, 13); // 1
  return EXIT_SUCCESS; // 11
}

void baffle (int output) {
  printf ("%i\n",output); // 6
  zippo (12, -5); // 7
}

void zippo (int quince, int flag) {
  // 2, 8
  if (flag < 0) {
  printf ("%i zoop\n", quince);  // 9
}
// 3
else {
  printf ("rattle ");  // 4
  baffle (quince);  // 5
  printf ("boo-wa-ha-ha\n"); // 10
  }
}

// The output would be: rattle 5\n12 zoop\nboo-wa-ha-ha
