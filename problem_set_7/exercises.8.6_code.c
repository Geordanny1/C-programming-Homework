# include <stdio.h>

int main()
{

  int data[4] = {6, 12, 18, 24}; 
  int *p = data;  /* this points the address of the first element */

  printf("the value of p: %p\n", p); /* an address */
                                     
  int foo = *p +2; /* this is adding 2 to the first element address  */


  int bar = *(p + 2);

  int waldo = p[3]; /* beacuse p[3] is the same as *(p + 3) */

  printf("the value of foo: %d\n", foo);
  printf("the value of bar: %d\n", bar);
  printf("the value of waldo: %d\n", waldo);

  printf("The size of an integer on my machine %ld\n", sizeof(int)); 
  printf("The size of an integer data on my machine %ld\n", sizeof(data)); 

  return 0;
}
