/*
 * Student Id: 00348504
 * Descirption: check the program
*/

/* Exercise 1 Trace two pointers

Without running this fragment first, record x, y, *p, and *q after each assignment. Then run it in a small program and check your table.

int x = 4;
int y = 9;
int *p = &x; pointer p points to the address of x
int *q = p;  pointer q points the pointer p that points to the address of x
*q = 7;      changes the value associated with the address of q, which is the pointer p, which points to x, so x = 7
p = &y;      change the pointer q to point to the address of y.
*p = *q + 2; take the value associate with the pointer p, change it to the value associate with the pointer q added 2 to it.
             y = 7 + 2 = 9

Explain why q = p would change where q points, while *q = *p would change an integer. 
Answer:
q = p,  makes the pointer q point to the pointer p (changes directions).
as *q = *p changes the value in the address of q, by the value in the address of p (changes value of address the pointer points)
*/


# include <stdio.h>

int main()
{
  int x = 4;
  int y = 9;
  printf("Original value of x is %d \n", x);
  printf("Original value of y is %d \n", y);

  int *p = &x;
  int *q = p;

  *q = 7;
  printf("The value of x is %d\n", x);

  p = &y;
  *p = *q + 2;
  printf("The value of y is %d\n", y);

  return 0;
}
