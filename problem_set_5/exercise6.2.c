
/* STUDENT ID: 00348504
 Description:
  This an impletation of the power function with a while and foor loop
 */

# include <stdio.h>

int power(int base, int exponent);

int main()
{

  int foo = power(5, 2);
  int bar = power(5, 3);

  int faz = power(1, 2);
  int waldo = power(5, 0);

  printf("%d\n", foo);
  printf("%d\n", bar);

  printf("%d\n", faz);
  printf("%d\n", waldo);

  return 0; 
}

int power(int base, int exponent)
{
  if (base == 1) {
    return base;
  }

  if (exponent == 0 ) {
    return 1;
  }

  int end = exponent;

  int result = base;

  // while (end != 1)
  // {
  //   result *= result;
  //   end--;
  // }

  for (int i = 1; i < exponent; i++){
    result *= result;
  }

  return result;

}
