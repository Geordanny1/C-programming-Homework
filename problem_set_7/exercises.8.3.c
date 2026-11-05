/*
 * Student Id: 00348504
 * Descirption: a program witha  function that perfom a swap
*/



# include <stdio.h>

void swap(int*, int*);

int main()
{

  int foo  =  12; 
  int bar  = 50;

  puts("Before swap");
  printf("The value of foo: %d\n", foo); // check if the swrap
  printf("The value of bar: %d\n", bar);


  swap(&foo, &bar); /* swap the value */
                    
  puts("After swap");
  printf("The value of foo: %d\n", foo); // check if the swap
  printf("The value of bar: %d\n", bar);

  return 0;
}


void swap(int *first, int *second)
{

  int tmp = *first;  // we create a temporary variable to store the value of first
  *first  = *second; // we assing the value of first to what ever second is
  *second = tmp;     // we assing the value of second the temporary variable, which is storing that was asscoiate the first

}
